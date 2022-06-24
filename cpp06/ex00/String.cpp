/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:31:55 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/24 12:22:08 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "String.hpp"

String::String(void) : _str("42") {}

String::String(std::string str) : _str(str) {}

String::~String(void) {}

String::String(String const &instance){
    _str = instance.getString();
}

String  &String::operator=(String const &instance){
    if (this != &instance)
		_str = instance.getString();
    return *this;
}

std::string String::getString(void) const{
	return _str;
}

String::operator double(void){
	double	num;
	try
	{
		std::cout.precision(1);
		std::cout << "double: ";
		num = static_cast<double>(std::stod(_str));
		std::cout << std::fixed << num  << std::endl;
	}
	catch (std::invalid_argument) 
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range)
	{
		std::cout << "out of range" << std::endl;
	}

	return num;
}

String::operator float(void){
	float	num;

	try
	{
		std::cout.precision(1);
		std::cout << "float: ";
		num = static_cast<float>(std::stof(_str));
		std::cout << std::fixed << num << "f" << std::endl;

	}
	catch (std::invalid_argument) 
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range)
	{
		std::cout << "out of range" << std::endl;
	}

	return num;	
}

String::operator int(void){
	int	num;

	try
	{
		std::cout << "int: ";
		num = static_cast<int>(std::stoi(_str));
		std::cout << num << std::endl;
	}
	catch (std::invalid_argument) 
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range)
	{
		std::cout << "out of range" << std::endl;
	}

	return num;	
}

String::operator char(void){
	char	symbol;

	try
	{
		std::cout << "char: ";
		symbol = static_cast<char>(toChar());
		std::cout << symbol << std::endl;
	}
	catch (std::invalid_argument) 
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range)
	{
		std::cout << "out of range" << std::endl;
	}
	catch (char const* str)
	{
		std::cout << str << std::endl;
	}

	return symbol;	
}

int	String::toChar(void){
	double	symbol;

	symbol = std::stod(_str);
	
	if (symbol > 126 || symbol < 32)
		throw std::out_of_range("");
	if (!std::isprint(symbol))
		throw "Non displayble";
	return symbol;
}
