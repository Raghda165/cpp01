/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:03:38 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/17 18:52:17 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie:: announce(void)
{
	std::cout << getname();
	std::cout << ": ";
	std::cout<<"BraiiiiiiinnnzzzZ...";
}
