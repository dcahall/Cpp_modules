/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:05:59 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 12:01:38 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include <iostream>

class Amateria;

class Character: public ICharacter
{

	public:
		Character(void);
		Character(std::string name);
		Character(Character const &instance);
		~Character(void);

		Character			&operator=(Character const &instance);

		std::string const	&getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria	*_inventory[4];
};

#endif