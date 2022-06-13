/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:21:10 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/13 16:53:01 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
	{
		DiamondTrap instance;
	}
	{
		std::cout << std::endl;
		DiamondTrap instance("pokemon");
		instance.beRepaired(10);
		instance.attack("post");
		instance.takeDamage(110);
		instance.beRepaired(10);
		instance.attack("post");
		instance.takeDamage(20);
	}
	{
		std::cout << std::endl;
		DiamondTrap instance("pokemon");
		instance.whoAmI();
		instance.guardGate();
		instance.highFivesGuys();
		instance.attack("post");
		instance.takeDamage(5);
		instance.beRepaired(10);
		instance.takeDamage(5);
		instance.beRepaired(3);		
	}	
}