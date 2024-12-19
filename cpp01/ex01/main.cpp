/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:53:06 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/18 15:40:26 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie ob1;
	Zombie *array;
	// std::cout<<"im here"<<std::endl;
	array = ob1.zombieHorde(5,"foo");
	for (int i = 0;i<5;i++)
	{
		array[i].announce();
		std::cout<<std::endl;
	}
	delete []array;


}
