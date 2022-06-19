/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:18:25 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/19 15:11:02 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &);
		Intern	&operator=(Intern const &);
		~Intern(void);

		Form	*makeForm(std::string name, std::string target);

		typedef Form* (Intern::*ptrForm) (std::string);
		
		class NoFormName: public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		Form	*_ShrubberyCreation(std::string target);
		Form	*_RobotomyRequest(std::string target);
		Form	*_PresidentialPardon(std::string target);
		ptrForm	_allForm[3];
};

#endif