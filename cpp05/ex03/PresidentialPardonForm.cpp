/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:49:48 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/19 13:00:57 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void): Form("PPF", 25, 5), 
_target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PPF", 25, 5),
_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &inst):
Form(inst.getName(), inst.getGradeSign(), inst.getGradeExecute()), 
_target(inst.getTarget()) {}

PresidentialPardonForm::~PresidentialPardonForm(void){}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm
const &inst){
	if (this != &inst)
		_target = inst.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const { return _target; }

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooHighException();
	else if (getSigned() == false)
		throw FormIsUnsigned();
	std::cout << _target << "has been pardoned by Zaphod Beeblebrox\n";
}