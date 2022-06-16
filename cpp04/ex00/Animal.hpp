/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:22:15 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 14:26:39 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal const &instance);
		Animal &operator=(Animal const &instance);

		void				setType(std::string newType);
		virtual void		makeSound(void) const;
		std::string			getType(void) const;

	protected:
		std::string	_type;
};

#endif