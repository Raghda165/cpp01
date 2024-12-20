/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:24:47 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/19 07:15:30 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
class Weapon
{
	private :
		std::string type;
	public :
		const std :: string &getType(void)
		{
			const std ::string &strref = this -> type;
			// std::cout<<this->type<<"in heree"<<std::endl;
			return(strref);
		}
		void setType(std::string type)
		{
			this -> type = type;
			
		}
		Weapon(std::string type);
};
#endif
