/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:10:19 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 17:36:36 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &instance){
	_grade = instance.getGrade();
	_name = instance.getName();
}

Bureaucrat::~Bureaucrat(void){}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &instance){
	if (this != & instance)
	{
		_grade = instance._grade;
		_name = instance._name;		
	}
	return (*this);
}

const std::string	Bureaucrat::getName(void) const{ return _name; }

int Bureaucrat::getGrade(void) const{ return _grade ;}

void	Bureaucrat::incrementGrade(void){
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade(void){
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &instance){
	out << instance.getName() << ", bureaucrat grade " << instance.getGrade();
	return out;
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too low (> 150)";
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too high (< 1)";
}