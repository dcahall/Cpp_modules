/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:25:00 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/17 19:03:15 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		Form("Random", 151, 151);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
		Bureaucrat	inst1("Georgy", 20);
		Form		inst2("Routine", 10, 5);
		Form		inst3("LARGE ROUTINE", 40, 30);
		inst1.signForm(inst2);
		inst1.signForm(inst3);
		std::cout << inst3 << std::endl;
		std::cout << inst2 << std::endl;
}