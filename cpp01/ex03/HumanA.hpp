/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:59:16 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/19 07:40:39 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
class HumanA 
{
	private:
		Weapon weapon;
		std :: string name;
	public:
		void setname(std :: string name)
		{
			this -> name = name;
		}
		std :: string getname(void)
		{
			return(this -> name);
		}
		void setWeapon(Weapon weapon)
		{
			this -> weapon = weapon;
		}
		Weapon getweapon(void)
		{
			return(this -> weapon);
		}
		HumanA( std :: string name,Weapon weapon);
		void attack(void);
};
#endif
