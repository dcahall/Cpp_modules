/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:39:09 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 12:10:50 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure"){
	std::cout << "Cure default constructor called\n";
}

Cure::~Cure(void){
	std::cout << "Cure default destructor called\n";
}

Cure::Cure(Cure const &instance){
	_type = instance._type;
}

Cure	&Cure::operator=(Cure const &instance){
	if (this != &instance)
		_type = instance._type;
	return (*this);
}

AMateria *Cure::clone(void) const{
	return new Cure;
}

void	Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

