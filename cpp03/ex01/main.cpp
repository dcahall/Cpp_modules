/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:21:10 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/13 15:06:09 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	{
		ClapTrap instance1;
	}
	{
		std::cout << std::endl;
		ScavTrap instance2;
	}
	{
		std::cout << std::endl;
		ScavTrap instance("pokemon");
		instance.beRepaired(10);
		instance.attack("post");
		instance.takeDamage(110);
		instance.beRepaired(10);
		instance.attack("post");
		instance.takeDamage(20);
	}
	{
		std::cout << std::endl;
		ScavTrap instance("pokemon");
		instance.guardGate();
		instance.attack("post");
		instance.takeDamage(5);
		instance.beRepaired(10);
		instance.takeDamage(5);
		instance.beRepaired(3);		
	}	
	{
		std::cout << std::endl;
		ClapTrap instance("Donatela");
		instance.beRepaired(10);
		instance.attack("post");
		instance.takeDamage(20);
		instance.beRepaired(10);
		instance.attack("post");
		instance.takeDamage(20);
	}
	{
		std::cout << std::endl;
		ClapTrap instance("Donatela");
		instance.attack("post");
		instance.takeDamage(5);
		instance.beRepaired(10);
		instance.takeDamage(5);
		instance.beRepaired(3);
	}
}