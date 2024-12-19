/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:02:26 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/18 08:17:15 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* Zombie :: zombieHorde( int N, std::string name )
{
	int i;
	Zombie *zombies;

	zombies = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombies[i].setname(name);
		i++;
	}
	return(zombies);
}
