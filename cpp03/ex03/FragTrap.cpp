/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:45:17 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/13 16:18:25 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "FragTrap default constructor called" << std::endl;
	setDamage(30);
	setHealth(100);
	setEnergy(100);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap string constructor called" << std::endl;
	setDamage(30);
	setHealth(100);
	setEnergy(100);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &instance){
	std::cout << "FragTrap copy constructor called" << std::endl;
	setDamage(instance.getDamage());
	setEnergy(instance.getEnergy());
	setHealth(instance.getHealth());
	setName(instance.getName());
}

FragTrap	&FragTrap::operator=(FragTrap const &instance){

	std::cout << "FragTrap copy assignment operator called" << std::endl;

	if (this != &instance)
	{
		setDamage(instance.getDamage());
		setEnergy(instance.getEnergy());
		setHealth(instance.getHealth());
		setName(instance.getName());	
	}
	return (*this);
}

void	FragTrap::attack(std::string const &target){
	if (checkResources())
		return ;
	std::cout << "FragTrap " << getName() << " attacks " << target;
	std::cout << " causing " << getDamage()<< " points of damage!" << std::endl; 
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragTrap: take five" << std::endl;
}