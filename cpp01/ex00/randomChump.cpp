/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:21:07 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/17 16:21:47 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void Zombie::randomChump( std::string name )
{
	Zombie *temp;
	temp = newZombie(name);
	temp->announce();
	delete temp;
}
