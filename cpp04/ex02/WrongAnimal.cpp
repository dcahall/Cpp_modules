/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:25:07 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 14:40:05 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Just WrongAnimal"){
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &instance){
	_type = instance._type;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &instance){
	if (this != &instance)
		_type = instance._type;
	return (*this);
}

void	WrongAnimal::setType(std::string newType){
	_type = newType;
}

std::string	WrongAnimal::getType(void) const{ return _type; }

void	WrongAnimal::makeSound(void) const{
	std::cout << "Ummmm\n";
}
