/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:21:42 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/17 16:32:06 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie obj1;
	obj1.announce();
	std::cout<<std::endl;

	Zombie *heapzombie=obj1.newZombie("Raghda");
	heapzombie->announce();
	std::cout<<std::endl;
	delete heapzombie;
	std::cout<<std::endl;


	obj1.randomChump("Raghdaaaa");
}


