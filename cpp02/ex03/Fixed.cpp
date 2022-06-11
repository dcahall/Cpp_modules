/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:09:35 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/11 14:40:49 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_shiftBits = 8;

Fixed::Fixed(void){
	_fixPointNum = 0;
}

Fixed::~Fixed(void){
}

Fixed::Fixed(const int num){
	_fixPointNum = num << _shiftBits;
}

Fixed::Fixed(const float num){
	_fixPointNum = roundf(num * (1 << _shiftBits));
}

Fixed::Fixed(const Fixed &instance){
	this->_fixPointNum = instance.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &instance){
	if (this != &instance)
		this->_fixPointNum = instance.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &instance){
	return out << instance.toFloat();
}

int		Fixed::getRawBits(void) const{
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

bool	Fixed::operator==(const Fixed &instance) const{
	return (this->getRawBits() == instance.getRawBits());
}

bool	Fixed::operator!=(const Fixed &instance) const{
	return !(operator==(instance));
}

bool	Fixed::operator<(const Fixed &instance) const{
	return (this->getRawBits() < instance.getRawBits());
}

bool	Fixed::operator>(const Fixed &instance) const{
	return (this->getRawBits() > instance.getRawBits());
}

bool	Fixed::operator>=(const Fixed &instance) const{
	return !(operator<(instance));
}

bool	Fixed::operator<=(const Fixed &instance) const{
	return !(operator>(instance));
}

Fixed	Fixed::operator+(const Fixed &instance) const{
	return (this->toFloat() + instance.toFloat());
}

Fixed	Fixed::operator-(const Fixed &instance) const{
	return (this->toFloat() - instance.toFloat());
}

Fixed	Fixed::operator*(const Fixed &instance) const{
	return (this->toFloat() * instance.toFloat());
}

Fixed	Fixed::operator/(const Fixed &instance) const{
	return (this->toFloat() / instance.toFloat());
}

Fixed	Fixed::operator++(int) {
	Fixed prefix(*this);
	this->_fixPointNum += 1;
	return (prefix);
}

Fixed	Fixed::operator--(int) {
	Fixed prefix(*this);
	this->_fixPointNum -= 1;
	return (prefix.toFloat());
}

Fixed	&Fixed::operator++(void) {
	this->_fixPointNum += 1;
	return (*this);
}

Fixed	&Fixed::operator--(void) {
	this->_fixPointNum -= 1;
	return (*this);
}

Fixed	Fixed::min(const Fixed &instance1, const Fixed &instance2){
	return (instance1.getRawBits() < instance2.getRawBits() ? instance1 : instance2);
}

Fixed	Fixed::min(Fixed &instance1, Fixed &instance2){
	return (instance1.getRawBits() < instance2.getRawBits() ? instance1 : instance2);
}

Fixed	Fixed::max(Fixed const  &instance1, Fixed const &instance2){
	return (instance1.getRawBits() > instance2.getRawBits() ? instance1 : instance2);
}

Fixed	Fixed::max(Fixed &instance1, Fixed &instance2){
	return (instance1.getRawBits() > instance2.getRawBits() ? instance1 : instance2);
}
