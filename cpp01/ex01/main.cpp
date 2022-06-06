/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:48:08 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/06 21:12:06 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv){
	Zombie	*zombies;
	int		numObjects;

	if (argc == 1)
		return (EXIT_SUCCESS);
	try
	{
		numObjects = std::stoi(argv[1], nullptr, 10);
	}
	catch(const std::exception& exc)
	{
		std::cout << exc.what() << '\n';
		return (EXIT_FAILURE);
	}
	zombies = zombieHorde(numObjects, "Pokemon");
	for (int i = 0; i < numObjects; i++)
	{
		std::cout << i + 1 << " ";
		zombies[i].announce();
	}
	delete [] zombies;
}