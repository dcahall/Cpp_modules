/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:12:17 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 12:06:05 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){
	std::cout << "AMateria default constructor called\n";
	_type = "default";
}

AMateria::AMateria(std::string const &type){
	std::cout << "Amateria type constructor called\n";
	_type = type;
}

AMateria::~AMateria(void){
	std::cout << "AMateria destructor called\n";
}

AMateria::AMateria(AMateria const &instance){
	_type = instance._type;
}

AMateria	&AMateria::operator=(AMateria const &instance){
	if (this != &instance)
		_type = instance._type;
	return (*this);
}

std::string const &AMateria::getType(void) const{ return _type; }

void	AMateria::use(ICharacter &target){
	std::cout << "Amateria used by " << target.getName() << std::endl;
}