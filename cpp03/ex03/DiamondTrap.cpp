/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:32:38 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/13 16:46:40 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap string constructor called" << std::endl;
	this->_name = name;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &instance){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	_name = instance._name;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &instance){
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;

	if (this != &instance)
		this->_name = instance._name;
	return (*this);
}

void		DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << getName() << std::endl;
}

