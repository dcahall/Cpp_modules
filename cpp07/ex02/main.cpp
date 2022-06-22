/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:23:13 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/22 19:03:20 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <stdexcept>


int main(void){
	Array <int>tmp(20);
	Array <int>empty;
	
	std::cout << "------Int Array-----\n";
	std::cout << "Operator overloading insertion\n";
	std::cout << "Empty array: " << empty << std::endl;
	std::cout << "Non empty array: " << tmp << std::endl;

	std::cout << "\nOperator []:\n";
	for(unsigned i = 0; i < tmp.size(); i++)
	{
		tmp[i] = i;
		std::cout << tmp[i] << std::endl;
	}

	std::cout << "------Deep copy-----\n";
	Array <int>copy(tmp);
		for(unsigned i = 0; i < copy.size(); i++)
		copy[i] = i;
	for(unsigned i = 0; i < copy.size(); i++)
	{
		copy[i] = i;
		std::cout << copy[i] << std::endl;
	}

	std::cout << "-----Wrong index-----\n";
	try
	{
		copy[-1];
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		copy[20];
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}