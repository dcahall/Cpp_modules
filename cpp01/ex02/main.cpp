/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:22:45 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/10 12:42:20 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address" << std::endl;
	std::cout << "str: " << &str << std::endl;
	std::cout << "string PTR: " << &stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;

	std::cout << "value in variable" << std::endl;
	std::cout << "str: " << str << std::endl;
	std::cout << "string PTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}