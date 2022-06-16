/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:25:07 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 19:20:15 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Just Animal"){
	std::cout << "Animal constructor called\n";
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called\n";
}

Animal::Animal(Animal const &instance){
	_type = instance._type;
}

Animal	&Animal::operator=(Animal const &instance){
	if (this != &instance)
		_type = instance._type;
	return (*this);
}

void	Animal::setType(std::string newType){
	_type = newType;
}

std::string	Animal::getType(void) const{ return _type; }
