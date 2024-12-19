/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:00:17 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/19 10:39:11 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
class HumanB
{
	private:
		std :: string name;
	public:
		void setWeapon(std :: string type)
		{
			Weapon *weapon;
			weapon = new Weapon;
			weapon->setType(type);
		}
		std :: string getname(void)
		{
			return(this -> name);
		}
		void setname(std :: string name)
		{
			this -> name = name;
		}
		HumanB(std::string name);
		void attack(void);

};
#endif
