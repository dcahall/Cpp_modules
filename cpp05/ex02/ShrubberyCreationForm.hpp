/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:22:42 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/18 17:07:03 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <exception>
# include <iostream>
# define TREE \
"     ccee88oo          \n\
   C8O8O8Q8PoOb o8oo    \n\
  dOB69QO8PdUOpugoO9bD  \n\
 CgggbU8OU qOp qOdoUOdcb\n\
	6OuU  /p u gcoUodpP \n\
	   \\\\//  /douUP   \n\
		 \\\\////       \n\
		  |||/\\        \n\
		  |||\\/        \n\
		  |||||         \n\
  .....\\//||||\\....  \n"

class Bureaucrat;

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &inst);		
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &inst);
		void					execute(Bureaucrat const &) const;
		std::string				getTarget(void) const;

	private:
		std::string	_target;		
};

# endif