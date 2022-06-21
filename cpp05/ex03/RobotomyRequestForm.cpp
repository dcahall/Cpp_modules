/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:49:48 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/19 13:04:39 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm(void): Form("RRF", 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RRF", 72, 45),
_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &inst):
Form(inst.getName(), inst.getGradeSign(), inst.getGradeExecute()),
_target(inst.getTarget()) {}
 
RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm
const &inst){
	if (this != &inst)
		_target = inst.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const { return _target; }

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getGradeExecute())
		throw GradeTooHighException();
	else if (getSigned() == false)
		throw FormIsUnsigned();
	srand(time(NULL));	
		std::cout << "Bz - z - z - z: ";
	if (rand() % 2)
		std::cout << _target << " was robotized\n";
	else
		std::cout << _target << " was not robotized\n";
}