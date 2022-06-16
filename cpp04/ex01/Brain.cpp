/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:51:07 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 16:39:11 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = "~random idea~";
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called\n";
}

Brain::Brain(Brain const &instance){
	for (int i = 0; i < 100; i++)
		_ideas[i] = instance._ideas[i];
}

Brain	&Brain::operator=(Brain const &instance){
	if (this != &instance)
		for (int i = 0; i < 100; i++)
			_ideas[i] = instance._ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int index) const{ return _ideas[index]; }