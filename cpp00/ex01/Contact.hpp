/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:45:33 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/04 17:19:53 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include	<iomanip>
# include	<string>
# include	<iostream>
# include	<cstdlib>


class Contact {
	public:
		Contact();
		~Contact();
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
		void		setFirstName(std::string value);
		void		setLastName(std::string value);
		void		setNickName(std::string value);
		void		setPhoneNumber(std::string value);
		void		setDarkestSecret(std::string value);

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif