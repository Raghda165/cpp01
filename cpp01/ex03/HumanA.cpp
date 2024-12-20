/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:31:55 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/19 07:43:07 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA :: HumanA(std :: string name, Weapon &weapon):  weapon(weapon),name(name)
{
	setname(name);
	setWeapon(weapon);
}
void HumanA:: attack(void)
{
	std :: cout << getname();
	std :: cout << " attacks with their ";
	std :: cout << getweapon().getType()<<std::endl;
}
