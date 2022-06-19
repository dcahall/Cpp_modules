/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:27:43 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/19 15:20:22 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) {
	_allForm[0] = &Intern::_PresidentialPardon;
	_allForm[1] = &Intern::_RobotomyRequest;
	_allForm[2] = &Intern::_ShrubberyCreation;
}

Intern::~Intern(void) {}

Intern::Intern(Intern const &) {}

Intern	&Intern::operator=(Intern const &) { return *this; }

Form	*Intern::makeForm(std::string name, std::string target){
	std::string	formsName[3] = {"Presidential pardon", "Robotomy request", "Shrubbery creation"};
	for (int i = 0; i < 3; i++)
		if (formsName[i] == name)
			return (this->*_allForm[i])(target);
	throw NoFormName();
}

Form	*Intern::_PresidentialPardon(std::string target){
	std::cout << "Intern creates presidential pardon" << std::endl;
	return new PresidentialPardonForm(target);
}

Form	*Intern::_RobotomyRequest(std::string target){
	std::cout << "Intern creates robotomy request" << std::endl;
	return new RobotomyRequestForm(target);
}

Form	*Intern::_ShrubberyCreation(std::string target){
	std::cout << "Intern creates shrubbery creation" << std::endl;
	return new ShrubberyCreationForm(target);
}

const char*	Intern::NoFormName::what() const throw(){
	return "There is no such form";
}
