/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:31:53 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 12:27:25 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void){
	_name = "default";
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	std::cout << "Character default constructor called\n";
}

Character::Character(std::string name){
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = 0;
	std::cout << "Character type constructor called\n";
}

Character::~Character(void){
	for (int i = 0; i < 4; i++)
		if (_inventory[i] != 0)
			delete _inventory[i];
	std::cout << "Character destructor called\n";
}

Character::Character(Character const &instance){
	for (int i = 0; i < 4; i++)
	{
		if (instance._inventory[i] != 0)
				_inventory[i] = instance._inventory[i]->clone();
		else
			_inventory[i] = 0;
	}
	_name = instance._name;
}

Character	&Character::operator=(Character const &instance){
	if (this != &instance)
	{
		for (int i = 0; i < 4; i++)
		{
			if (instance._inventory[i] != 0)
					_inventory[i] = instance._inventory[i]->clone();
			else
				_inventory[i] = 0;
		}
		_name = instance._name;
	}
	return (*this);
}

std::string const	&Character::getName(void) const{ return _name; }

void	Character::equip(AMateria* m){
	int	i = 0;

	if (m == 0)
		return ;
	while (i < 4 && _inventory[i] != 0)
		i++;
	if (i < 4)
	{
		_inventory[i] = m;
		std::cout << _name << " equipped with " << m->getType() << std::endl; 
	}
	else
		std::cout << _name << " don't have empty slots\n";
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		std::cout << "There is nothing in the slot #" << idx;
	else if (_inventory[idx] == 0)
		std::cout << "Slots #" << idx << " is empty";
	else
	{
		std::cout << _name << " dropped " << _inventory[idx]->getType();
		_inventory[idx] = 0;
	}
	std::cout << std::endl;
}

void	Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3)
		std::cout << "There is nothing in the slot #" << idx << std::endl;
	else if (_inventory[idx] == 0)
		std::cout << "Slots #" << idx << " is empty\n";
	else
		_inventory[idx]->use(target);
}


