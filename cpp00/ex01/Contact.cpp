/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:54:14 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/04 17:54:19 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

std::string	Contact::getFirstName(void){
	return (firstName);
}

std::string	Contact::getLastName(void){
	return (lastName);
}

std::string	Contact::getNickName(void){
	return (nickName);
}

std::string	Contact:: getPhoneNumber(void){
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret(void){
	return (darkestSecret);
}

void	Contact::setFirstName(std::string value){
	firstName = value;	
}

void	Contact::setLastName(std::string value){
	lastName = value;	
}

void	Contact::setNickName(std::string value){
	nickName = value;	
}

void	Contact::setPhoneNumber(std::string value){
	phoneNumber = value;	
}

void	Contact::setDarkestSecret(std::string value){
	darkestSecret = value;	
}


