/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:55:46 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/11 16:31:52 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _damage(0), _health(10), _energy(10){
	std::cout << "Default constructor called" << std::endl;
	this->_name = "Default";
}

ClapTrap::ClapTrap(std::string name) : _damage(0), _health(10), _energy(10){
	std::cout << "String constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &instance){
	std::cout << "Copy constructor called" << std::endl;
	this->_damage = instance._damage;
	this->_energy = instance._energy;
	this->_health = instance._health;
	this->_name = instance._name;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &instance){

	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &instance)
	{
		this->_damage = instance._damage;
		this->_energy = instance._energy;
		this->_health = instance._health;
		this->_name = instance._name;	
	}
	return (*this);
}

int	ClapTrap::checkResources(void){
	if (_health <= 0)
	{
		std::cout << _name << " is dead" << std::endl;
		return 1;
	}
	else if (_energy <= 0)
	{
		std::cout << _name << " has no energy" << std::endl;
		return 1;		
	}
	return (0);
}

void	ClapTrap::attack(const std::string &target){
	if (checkResources())
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << " causing " << _damage << " points of damage!" << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (checkResources())
		return ;
	_health -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount;
	std::cout << " units of damage current health level " << _health << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (checkResources())
		return ;
	if (_health + amount > 10)
		_health = 10;
	else
		_health += amount;
	std::cout << "ClapTrap " << _name << " restored health to " << amount;
	std::cout << " current health level " << _health << std::endl;
}


