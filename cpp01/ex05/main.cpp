/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:36:42 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/08 17:19:18 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	Harl	instance;

	if (argc != 2)
		std::cout << "wrong numbers of argument" << std::endl;
	else
		instance.complain(argv[1]);
}