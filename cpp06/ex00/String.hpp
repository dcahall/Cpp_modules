/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   String.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:31:59 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/21 12:22:39 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_HPP
# define STRING_HPP
# include "iostream"

class String
{
    public:
		String(void);
		String(std::string str);
		String(String const &instance);
		String  &operator=(String const &instance);
		~String(void);  

		operator float ();
		operator int ();
		operator char ();
		operator double ();

		std::string getString(void) const;
             
	private:
		std::string	_str;
		int			toChar(void);


};

#endif