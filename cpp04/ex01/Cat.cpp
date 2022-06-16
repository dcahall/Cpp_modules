/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:41:06 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 16:38:10 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	std::cout << "Cat constructor called\n";
	setType("Cat");
	_brainPtr = new Brain();
}

Cat::~Cat(void) {
	delete _brainPtr;
	std::cout << "Cat destructor called\n";
}

Cat::Cat(Cat const &instance){
	_type = instance._type;
	_brainPtr = new Brain();
	*_brainPtr = *(instance._brainPtr);
}

Cat	&Cat::operator=(Cat const &instance){
	if (this != &instance)
	{
		_brainPtr = new Brain();
		*_brainPtr = *(instance._brainPtr);
		_type = instance._type;
	}
	return (*this);
}

void	Cat::makeSound(void) const{
	std::cout << "Meow\n";
}

Brain	*Cat::getBrain(void) const{ return _brainPtr;}

