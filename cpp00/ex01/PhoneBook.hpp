/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:14:44 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/04 17:39:08 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include	<iostream>
# include	<string>
# include	<iomanip>
# include	<cstdlib>
# include	<stdio.h>
# include	<ctype.h>
# include	"Contact.hpp"
# define	PHONEBOOK_SIZE 8

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();
	void		addPerson(void);
	void		searchPerson(void);
	void		printAllContact(void);
	int			checkEnteredIndex(std::string index);
	std::string	getInfo(std::string value);
	std::string	trimmString(std::string str);

private:
	int		_counter;
	Contact	allContacts[PHONEBOOK_SIZE];
};

#endif
