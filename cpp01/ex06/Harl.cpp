/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:11:26 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/08 17:18:32 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	_functions[0] = &Harl::_debug;
	_functions[1] = &Harl::_info;
	_functions[2] = &Harl::_warning;
	_functions[3] = &Harl::_error;
}

Harl::~Harl(){}

void	Harl::_debug(void){
	std::cout << "--debug--" << std::endl;
}

void	Harl::_info(void){
	std::cout << "--info--" << std::endl;
}

void	Harl::_warning(void){
	std::cout << "--warning--" << std::endl;
}

void	Harl::_error(void){
	std::cout << "--error--" << std::endl;
}

void	Harl::_printComplain(int index){
	while (index < 4)
	{
		(this->*_functions[index])();
		index++;
	}
}

void	Harl::complain(std::string level){
	std::string	allLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	for (i = 0; i < 4; i++)
		if (allLevels[i] == level)
			break;
	switch(i) {
		case 0:
			_printComplain(i);
			break;
		case 1:
			_printComplain(i);
			break;
		case 2:
			_printComplain(i);
			break;
		case 3:
			_printComplain(i);
			break;
		default:
			std::cout << "No matches" << std::endl;
	}

}

