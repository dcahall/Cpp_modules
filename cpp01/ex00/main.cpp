/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:48:08 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/06 19:01:00 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie	*ourZombie;
	
	std::cout << "Heap:" << std::endl;
	ourZombie = newZombie("Donatela");
	ourZombie->announce();
	delete (ourZombie);
	std::cout << "Stack:" << std::endl;
	randomChump("Pokemon");
}