/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:37:38 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/04 17:41:31 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	cmd;

	while (1)
	{
		std::cout << "Enter the command (EXIT ADD SEARCH)" << std::endl;
		if (std::getline(std::cin, cmd).eof())
			return (EXIT_SUCCESS);
		if (cmd == "SEARCH")
			book.searchPerson();
		else if (cmd == "ADD")
			book.addPerson();
		else if (cmd == "EXIT")
			return (EXIT_SUCCESS);
	}
	return (EXIT_SUCCESS);
}