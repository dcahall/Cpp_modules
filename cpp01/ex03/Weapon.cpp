/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:22:57 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 12:12:20 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType){
	_type = weaponType;
}

Weapon::~Weapon(){}

const std::string	&Weapon::getType(void){
	const std::string &weaponType = _type;
	return (weaponType);
}

void	Weapon::setType(std::string newType){
	_type = newType;
}
