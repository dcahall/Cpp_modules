/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:06:47 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 12:32:55 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
	this->_myWeapon = nullptr;
}

HumanB::~HumanB(){}

void	HumanB::attack(void){
	std::cout << _name << " attacks with their " << _myWeapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon &weaponToSet){
	_myWeapon = &weaponToSet;
}
