/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:25:00 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/19 13:07:06 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

int main(void){
	try
	{
		Bureaucrat("Random", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	Form	*scf = new ShrubberyCreationForm("Somebody");
	Form	*ppf = new PresidentialPardonForm("Somebody");
	Form	*rrf = new RobotomyRequestForm("Somebody");
	Bureaucrat	*donald = new Bureaucrat("donald", 4);
	Bureaucrat	*zic = new Bureaucrat("zic" , 30);

	std::cout << "-----Sign Form------" << std::endl;
	zic->signForm(*scf);
	zic->signForm(*rrf);
	zic->signForm(*ppf);
	std::cout << "Is form signed? " << ppf->getSigned() << std::endl;
	donald->signForm(*ppf);
	std::cout << std::endl;

	std::cout << "------Execute command------" << std::endl;
	zic->executeForm(*scf);
	zic->executeForm(*rrf);
	zic->executeForm(*ppf);
	donald->executeForm(*ppf);
	std::cout << std::endl;

	std::cout << "------Deep copy-----" << std::endl;
	Form	*copy = new ShrubberyCreationForm(*((ShrubberyCreationForm *)scf));
	std::cout << *scf << std::endl;
	Bureaucrat *copyToo = new Bureaucrat(*donald);
	std::cout << *copyToo << std::endl;

	delete scf;
	delete ppf;
	delete rrf;
	delete donald;
	delete zic;
	delete copy;
	delete copyToo;
}