/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:21:35 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/17 14:57:23 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
class Zombie
{
	private:
		std::string name;
	public:
		void randomChump( std::string name );
		std::string getname(void)
		{
			return(name);
		}
		void setname(std::string name )
		{
			this->name = name;
		}
		void announce(void);
		~Zombie()
		{
			std::cout << this->name<<" has been destroyed";
		}
		Zombie* newZombie( std::string name );
};


#endif
