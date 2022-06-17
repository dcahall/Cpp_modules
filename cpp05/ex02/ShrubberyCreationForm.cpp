/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:30:25 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/17 19:41:17 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "iostream"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): _target("Default"), Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target),
Form("SCF", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &inst):
_target(inst.getTarget()), Form(inst.getName(), inst.getGradeSign(),
inst.getGradeExecute()) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm
const &inst){
	if (this != &inst)
	{
		_target = inst.getTarget();
		_signed = inst.getSigned();
	}
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const { return _target; }

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{

}