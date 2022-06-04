/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:14:31 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/04 18:31:59 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void){
	_counter = 0;
}

PhoneBook::~PhoneBook(){
}

std::string	PhoneBook::getInfo(std::string value){
	std::string	info;
	do
	{
		std::cout << value << std::endl;
		if (std::getline(std::cin, info).eof())
			exit(EXIT_SUCCESS);
	} while (info.empty());
	return (info);
}

std::string	PhoneBook::trimmString(std::string str){
	std::string	trimmStr;
	if (str.length() < 10)
		return (str);
	trimmStr = str.substr(0, 9);
	trimmStr += '.';
	return (trimmStr);
}

int	PhoneBook::checkEnteredIndex(std::string index_str){
	int	index_num;
	try
	{
		index_num = std::stoi(index_str, nullptr, 10);
	}
	catch (std::invalid_argument &our_exception)
	{
		std::cout << our_exception.what() << std::endl;
		return (1);
	}
	catch (std::out_of_range &our_exception)
	{
		std::cout << our_exception.what() << std::endl;
		return (1);
	}
	if (index_num > _counter - 1)
	{
		std::cout << "Out of range" << std::endl;
		return (1);
	}
	return (0);
}


void	PhoneBook::printAllContact(void){
	int	num_contacts;

	if (_counter >= 8)
		num_contacts = 8;
	else
		num_contacts = _counter;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < num_contacts; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10);
		std::cout << allContacts[i].getFirstName() << "|";
		std::cout << std::setw(10);
		std::cout << trimmString(allContacts[i].getLastName()) << "|";
		std::cout << std::setw(10);
		std::cout << trimmString(allContacts[i].getNickName()) << "|" << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl; 
}

void	PhoneBook::searchPerson(void){
	std::string	selectedIndex;
	int			index;
	if (_counter == 0)
	{
		std::cout << "There are no contacts in the address book yet" << std::endl;
		return ;
	}
	printAllContact();
	std::cout << "Select the client's index" << std::endl;
	do
	{
		if (std::getline(std::cin, selectedIndex).eof())
			exit(EXIT_SUCCESS);
	} while (checkEnteredIndex(selectedIndex));
	index = std::stoi(selectedIndex, nullptr, 10);
	std::cout << "Index: " << index << std::endl;
	std::cout << "First name " << allContacts[index].getFirstName() << std::endl;
	std::cout << "Last name " << allContacts[index].getLastName() << std::endl;
	std::cout << "Nick name " << allContacts[index].getNickName() << std::endl;
	std::cout << "Phone number " << allContacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret " << allContacts[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::addPerson(void){
	int 		index;
	std::string	info;

	index = PhoneBook::_counter % 8;
	info = getInfo("Enter first name:");
	allContacts[index].setFirstName(info);
	info = getInfo("Enter last name:");
	allContacts[index].setLastName(info);
	info = getInfo("Enter nick name:");
	allContacts[index].setNickName(info);
	info = getInfo("Enter phone number:");
	allContacts[index].setPhoneNumber(info);
	info = getInfo("Enter darkest secret:");
	allContacts[index].setDarkestSecret(info);
	std::cout << "The contact was successfully added" << std::endl;
	PhoneBook::_counter += 1;
}