/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryagoub <ryagoub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:56:56 by ryagoub           #+#    #+#             */
/*   Updated: 2024/12/18 15:58:23 by ryagoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string  *stringPTR;
	stringPTR = new std::string;
	stringPTR = &str;
	std::string  &stringREF = str;
	std::cout << &str<<std::endl;
	std::cout << stringPTR<<std::endl;
	std::cout << &stringREF<<std::endl;






}
