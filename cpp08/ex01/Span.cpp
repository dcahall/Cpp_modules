/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:29:49 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/25 14:26:51 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

Span::Span(void): _numEl(0) {}

Span::Span(unsigned int n): _numEl(n) {}

Span::~Span(void) {}

Span::Span(Span const &instance){
	_ourVec = instance._ourVec;
	_numEl = instance._numEl;
}

Span	&Span::operator = (Span const &instance){
	if (this != &instance)
	{
		_ourVec = instance._ourVec;
		_numEl = instance._numEl;		
	}
	return (*this);
}

void	Span::addNumber(int num){
	if (_ourVec.size() >= _numEl)
		throw std::out_of_range("Out of range");
	_ourVec.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator start,\
						std::vector<int>::iterator end){
	if ((std::distance(start, end)) > static_cast<long>((_numEl - _ourVec.size())))
		throw std::out_of_range("Out of range");
	_ourVec.insert(_ourVec.end(), start, end);
}

int	Span::shortestSpan(void) const{
	if (_ourVec.size() < 2)
		throw std::range_error("Not enough elements");
	std::vector<int>			copy;

	copy = _ourVec;
	std::sort(copy.begin(), copy.end());;
	return (copy[1] - copy[0]);
}

int	Span::longestSpan(void){
	if (_ourVec.size() < 2)
		throw std::range_error("Not enough elements");

	std::vector<int>::iterator	min;
	std::vector<int>::iterator	max;

	min = std::min_element(_ourVec.begin(), _ourVec.end());
	max = std::max_element(_ourVec.begin(), _ourVec.end());

	return (*max - *min);
}
