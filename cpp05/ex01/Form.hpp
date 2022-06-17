/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:08:56 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/17 17:55:26 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(Form const &instance);
		~Form(void);

		Form	&operator=(Form const &instance);

		std::string			getName(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecute(void) const;
		bool				getSigned(void) const;

		void				beSigned(Bureaucrat &instance);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		std::string const	_name;
		int const			_gradeSign;
		int const			_gradeExecute;
		bool				_signed;

};

std::ostream &operator<<(std::ostream &out, const Form &instance);

#endif