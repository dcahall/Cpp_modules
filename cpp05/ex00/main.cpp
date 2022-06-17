/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:25:00 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/17 12:03:26 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
	try
	{
		Bureaucrat("Random", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		Bureaucrat("Random", 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << Bureaucrat("Random", 30) << std::endl;;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}