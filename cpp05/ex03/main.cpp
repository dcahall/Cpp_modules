/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:25:00 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/19 15:21:10 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>

static void	test(std::string name, std::string target) {

	Bureaucrat	mike("Mike", 1);
	Intern		someRandomIntern;
	Form		*someRandomForm;

	std::cout << "-----------------------------------------------" << std::endl;
	try {
		someRandomForm = someRandomIntern.makeForm(name, target);
		mike.signForm(*someRandomForm);
		mike.executeForm(*someRandomForm);
		delete someRandomForm;
	}
	catch (std::exception & e) {
		std::cout << "Unable to create form: " << e.what() << std::endl;
	}

}

int main () {

	test("Shrubbery creation", "Bender");
	test("Robotomy request", "Bender");
	test("Presidential pardon", "Bender");
	test("NON-EXISTENT", "Bender");

	return 0;
}