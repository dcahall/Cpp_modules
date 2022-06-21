/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:27:34 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/21 16:46:08 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int	main(void){
	Data	val;
	Data	*test;

	val.age = 22;
	val.name = "Roman";

	std::cout << "Original struct\n";
	std::cout << "Age: " << val.age << std::endl;
	std::cout << "Name: " << val.name << std::endl;
	std::cout << "Address: " << &val << std::endl; 

	test = deserialize(serialize(&val));
	std::cout << "\nAfter serialization\n";
	std::cout << "Age: " << test->age << std::endl;
	std::cout << "Name: " << test->name << std::endl;
	std::cout << "Address: " << test << std::endl; 
}
