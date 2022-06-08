/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:58:51 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 19:45:55 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP
#include <fstream>
#include <iostream>

class Replacer
{
	public:
		Replacer(std::string file, std::string s1, std::string s2);
		~Replacer();
		void	overWriteChanges(void);
	private:
		void			_replaceStr(std::string &line);
		void			_getInfile(void);
		void			_getOutfile(void);
		void			_error(std::string message);

		std::string 	_toReplace;
		std::string		_replaceWith;
		std::string		_fileName;
		std::ifstream	_infile;
		std::ofstream	_outfile;
};

#endif 