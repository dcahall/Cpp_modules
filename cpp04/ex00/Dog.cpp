/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:41:06 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 12:56:00 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(){
	std::cout << "Dog constructor called\n";
	setType("Dog");
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
}

Dog::Dog(Dog const &instance){
	_type = instance._type;
}

Dog	&Dog::operator=(Dog const &instance){
	if (this != &instance)
		_type = instance._type;
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout << "Woof\n";
}

