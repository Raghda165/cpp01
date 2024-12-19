/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:36:33 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/17 18:06:23 by ryagoub          ###   ########.fr       */
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
		std::string getname(void)
		{
			return(name);
		}
		void setname(std::string name )
		{
			this->name = name;
		}
		void announce(void);
		Zombie* zombieHorde( int N, std::string name );
		~Zombie()
		{
			std::cout << this->name<<" has been destroyed";
		}
};


#endif
