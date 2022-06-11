/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:09:35 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/09 16:31:53 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_shiftBits = 8;

Fixed::Fixed(){
	_fixPointNum = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &instance){
	std::cout << "Copy constructor called" << std::endl;
	_fixPointNum = instance.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &instance){
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &instance)
		_fixPointNum = instance.getRawBits();	
	return (*this);
}


int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixPointNum);
}

void	Fixed::setRawBits(int const raw){
	_fixPointNum = raw;
}
