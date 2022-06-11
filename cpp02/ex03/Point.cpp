/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:12:19 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/11 15:11:10 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(float const x, float const y) : _x(x), _y(y){}

Point::~Point(){}

Point &Point::operator=(const Point &instance){
	(void) instance;
	return (*this);
}

Point::Point(Point const& instance) : _x(instance._x), _y(instance._y) {}

Fixed const	Point::getX(void) const{
	return (this->_x);
}

Fixed const	Point::getY(void) const{
	return (this->_y);
}