/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:09:35 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/09 16:21:17 by dcahall          ###   ########.fr       */
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

Fixed::Fixed(const int num){
	_fixPointNum = num << _shiftBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num){
	_fixPointNum = roundf(num * (1 << _shiftBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &instance){
	std::cout << "Copy constructor called" << std::endl;
	this->_fixPointNum = instance.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &instance){
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &instance)
		this->_fixPointNum = instance._fixPointNum;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &instance){
	return out << instance.toFloat();
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixPointNum);
}

void	Fixed::setRawBits(int const raw){
	_fixPointNum = raw;
}

float	Fixed::toFloat(void) const{
	return ((float)_fixPointNum / (1 << _shiftBits));
}

int	Fixed::toInt(void) const{
	return (_fixPointNum >> _shiftBits);
}