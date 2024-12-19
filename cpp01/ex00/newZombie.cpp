/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:21:49 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/17 15:12:27 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* Zombie:: newZombie( std::string name )
{
	Zombie *zombie_instance;
	zombie_instance = new Zombie;
	zombie_instance->setname(name);
	return(zombie_instance);
}


