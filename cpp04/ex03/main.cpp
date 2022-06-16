/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:55:15 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 15:18:54 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main(void){

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	std::cout << std::endl;

	std::cout << "-----Create materis-----" << std::endl;
	AMateria* tmp1;
	AMateria* tmp2;
	AMateria* tmp3;
	tmp1 = src->createMateria("ice");
	tmp2 = src->createMateria("cure");
	tmp3 = src->createMateria("water");
	std::cout << std::endl;

	std::cout << "-----Equip our character-----" << std::endl;
	me->equip(tmp1);
	me->equip(tmp2);
	me->equip(tmp3);
	std::cout << std::endl;

	std::cout << "-----Use materias-----" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(6, *bob);
	std::cout << std::endl;

	std::cout << "-----Unequip our character-----" << std::endl;
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(5);
	std::cout << std::endl;

	std::cout << "-----Deep Copy-----" << std::endl;
	Character *tom = new Character("tom");
	tom->equip(src->createMateria("ice"));
	tom->equip(src->createMateria("cure"));
	Character *tomCopy = new Character(*tom);
	std::cout << tomCopy->getName() << std::endl;
	tomCopy->use(0, *bob);
	tomCopy->use(1, *bob);
	tomCopy->use(2, *bob);
	tomCopy->use(6, *bob);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "-----Destructors-----" << std::endl;
	delete tmp1;
	delete tmp2;
	delete tomCopy;
	delete tom;
	delete bob;
	delete me;
	delete src;
	return 0;
}