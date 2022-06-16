/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:47:34 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/15 17:03:45 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#define NUM_OBJ 4

int main()
{
	Animal	*instances[NUM_OBJ];

	for (int i = 0; i < NUM_OBJ; i++)
	{
		if (i % 2)
			instances[i] = new Dog();
		else
			instances[i] = new Cat();
		instances[i]->makeSound();
		std::cout << instances[i]->getType() << std::endl;
		std::cout << std::endl;
	}
	Dog tmp(*((Dog *)instances[0]));
	for (int i = 0; i < 100; i++)
	{
		std::cout << tmp.getBrain()->getIdea(i) << std::endl;
	}
	for (int i = 0; i < NUM_OBJ; i++)
	{
		delete instances[i];
	}
}