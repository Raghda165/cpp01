/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:21:23 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/17 14:56:33 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie:: announce(void)
{
	std::cout << getname();
	std::cout << ": ";
	std::cout<<"BraiiiiiiinnnzzzZ...";
}



