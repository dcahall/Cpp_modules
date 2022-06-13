/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:21:10 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/11 16:33:48 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	{
		ClapTrap instance;
	}
	{
		std::cout << std::endl;
		ClapTrap instance("Pokemon");
		instance.beRepaired(10);
		instance.attack("post");
		instance.takeDamage(20);
		instance.beRepaired(10);
		instance.attack("post");
		instance.takeDamage(20);
	}
	{
		std::cout << std::endl;
		ClapTrap instance("Pokemon");
		instance.attack("post");
		instance.takeDamage(5);
		instance.beRepaired(10);
		instance.takeDamage(5);
		instance.beRepaired(3);
	}
}