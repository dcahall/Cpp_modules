/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:25:08 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/17 17:53:41 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "Form.hpp"
# include <iostream>
# include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &instance);
		~Bureaucrat(void);

		Bureaucrat			&operator=(Bureaucrat const &instance);
		const std::string	getName(void) const;
		int 				getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form &instance);

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
		std::string	_name;
		int			_grade;
};


std::ostream &operator<<(std::ostream &out, const Bureaucrat &instance);

#endif