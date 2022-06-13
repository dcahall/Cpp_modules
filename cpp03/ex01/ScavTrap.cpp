/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:09:46 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/13 16:17:45 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout << "ScavTrap default constructor called" << std::endl;
	setDamage(20);
	setHealth(100);
	setEnergy(50);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap string constructor called" << std::endl;
	setDamage(20);
	setHealth(100);
	setEnergy(50);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &instance){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	setDamage(instance.getDamage());
	setEnergy(instance.getEnergy());
	setHealth(instance.getHealth());
	setName(instance.getName());
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &instance){

	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	if (this != &instance)
	{
		setDamage(instance.getDamage());
		setEnergy(instance.getEnergy());
		setHealth(instance.getHealth());
		setName(instance.getName());	
	}
	return (*this);
}

void	ScavTrap::guardGate(void){
	if (checkResources())
		return ;	
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target){
	if (checkResources())
		return ;
	std::cout << "ScavTrap " << getName() << " attacks " << target;
	std::cout << " causing " << getDamage()<< " points of damage!" << std::endl; 
}
