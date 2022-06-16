/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:35:38 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 12:07:24 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
	std::cout << "MateriaSource default constructor called\n";
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; i++)
		if (_materias[i] != 0)
			delete _materias[i];
	std::cout << "MateriaSource destructor called\n";
}

MateriaSource::MateriaSource(MateriaSource const &instance){
	for (int i = 0; i < 4; i++)
	{
		if (instance._materias[i] != 0)
				_materias[i] = instance._materias[i]->clone();
		else
			_materias[i] = 0;
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &instance){
	if (this != &instance)
	{
		for (int i = 0; i < 4; i++)
		{
			if (instance._materias[i] != 0)
					_materias[i] = instance._materias[i]->clone();
			else
				_materias[i] = 0;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *instance){
	int	i = 0;

	if (instance == 0)
		return ;
	while (i < 4 && _materias[i] != 0)
		i++;
	if (i < 4)
	{
		_materias[i] = instance;
		std::cout << instance->getType() << " learned" << std::endl; 
	}
	else
		std::cout << "I can only know 4 matters\n";
}

AMateria	*MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != 0 && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return 0;
}
