/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:30:25 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/19 13:00:47 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("SCF", 145, 137),
_target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("SCF", 145, 137),
 _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &inst):
Form(inst.getName(), inst.getGradeSign(), inst.getGradeExecute()),
_target(inst.getTarget()) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm
const &inst){
	if (this != &inst)
		_target = inst.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const { return _target; }

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	std::ofstream	outfile;

	if (getSigned() == false || executor.getGrade() > this->getGradeExecute())
		throw GradeTooHighException() ;

	outfile.open(_target + "_shrubbery");
	if (!outfile.is_open())
		std::cout << "The problem with opening the file" << std::endl;
	else
		outfile << TREE;		
}