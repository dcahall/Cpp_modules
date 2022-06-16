/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:23:09 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 11:46:40 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice"){
	std::cout << "Ice default constructor called\n";
}

Ice::~Ice(void){
	std::cout << "Ice default destructor called\n";
}

Ice::Ice(Ice const &instance){
	_type = instance._type;
}

Ice	&Ice::operator=(Ice const &instance){
	if (this != &instance)
		_type = instance._type;
	return (*this);
}

AMateria *Ice::clone(void) const{
	return new Ice;
}

void	Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName();
	std::cout << " *\n";
}