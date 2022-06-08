/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:07:27 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 19:51:43 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string file, std::string s1, std::string s2){
	_fileName = file;
	_toReplace = s1;
	_replaceWith = s2;
}

Replacer::~Replacer(){}

void	Replacer::_error(std::string message){
	std::cout << "Error: " << message << std::endl;
	exit(EXIT_FAILURE);
}

void	Replacer::_getOutfile(){
	this->_outfile.open(_fileName + ".replace");
	if (!this->_outfile.is_open())
		_error("The problem with opening the file");
}

void	Replacer::_getInfile(){
	this->_infile.open(_fileName);
	if (!this->_infile.is_open())
		_error("The problem with opening the file");
}

void	Replacer::_replaceStr(std::string &line){
	std::size_t	position;
	
	if (_toReplace == _replaceWith)
		_error("The lines are identical");

	while ((position = line.find(_toReplace)) != std::string::npos)
	{
		line.erase(position, _toReplace.length());
		line.insert(position, _replaceWith);
	}
}

void	Replacer::overWriteChanges(void){
	std::string		line;

	_getInfile();
	_getOutfile();
	while (std::getline(_infile, line))
	{
		_replaceStr(line);
		_outfile << line << std::endl;
	}
	_infile.close();
	_outfile.close();
}