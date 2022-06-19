/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:33:49 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/18 17:06:18 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Form::Form(void) : _name("Default"), _gradeSign(150), _gradeExecute(150),
	_signed(false){}

Form::Form(std::string name, int gradeSign, int gradeExecute) : 
_name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _signed(false){
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw GradeTooLowException();
	else if (_gradeSign < 1 || _gradeExecute < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &instance) : _name(instance.getName()), _gradeSign(instance.getGradeSign()),
_gradeExecute(instance.getGradeExecute()), _signed(instance.getSigned()){}

Form 	&Form::operator=(Form const &instance){
	if (this != &instance)
		_signed = instance.getSigned();
	return (*this);
}

Form::~Form(void){}

std::string	Form::getName(void) const{ return _name; }

int	Form::getGradeSign(void) const{ return _gradeSign; }

int	Form::getGradeExecute(void) const{ return _gradeExecute; }

bool	Form::getSigned(void) const{ return _signed; }

void	Form::beSigned(Bureaucrat &instance){
	if (instance.getGrade() > _gradeSign)
		throw GradeTooLowException();
	else
		_signed = true;
}


std::ostream &operator<<(std::ostream &out, const Form &instance){
	out << "Name: " << instance.getName() << std::endl;
	out << "Grade to Sign: " << instance.getGradeSign() << std::endl;
	out << "Grade to Execute: " << instance.getGradeExecute() << std::endl;	
	out << "Is signed? " << instance.getSigned();
	return (out);
}

const char* Form::GradeTooLowException::what() const throw(){
	return "grade is too low";
}

const char* Form::GradeTooHighException::what() const throw(){
	return "grade is too high";
}