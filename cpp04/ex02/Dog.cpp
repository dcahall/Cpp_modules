/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:41:06 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 16:38:22 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(){
	std::cout << "Dog constructor called\n";
	setType("Dog");
	_brainPtr = new Brain();
}

Dog::~Dog(void) {
	delete _brainPtr;
	std::cout << "Dog destructor called\n";
}

Dog::Dog(Dog const &instance){
	_type = instance._type;
	_brainPtr = new Brain();
	*_brainPtr = *(instance._brainPtr);
}

Dog	&Dog::operator=(Dog const &instance){
	if (this != &instance)
	{
		_brainPtr = new Brain();
		*_brainPtr = *(instance._brainPtr);
		_type = instance._type;
	}
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout << "Woof\n";
}

Brain	*Dog::getBrain(void) const{ return _brainPtr;}

