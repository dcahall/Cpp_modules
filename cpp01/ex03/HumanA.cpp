/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:44:51 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 12:38:43 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponToSet) : _myWeapon(weaponToSet),
_name(name){}

HumanA::~HumanA(){}

void	HumanA::attack(void){
	std::cout << _name << " attacks with their " << _myWeapon.getType();
	std::cout << std::endl;
}