/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:41:06 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 14:41:13 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(){
	std::cout << "WrongCat constructor called\n";
	setType("WrongCat");
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(WrongCat const &instance){
	_type = instance._type;
}

WrongCat	&WrongCat::operator=(WrongCat const &instance){
	if (this != &instance)
		_type = instance._type;
	return (*this);
}

void	WrongCat::makeSound(void) const{
	std::cout << "Meow\n";
}
