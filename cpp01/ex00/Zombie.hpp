/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:26:24 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 11:50:51 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include	<iomanip>
# include	<iostream>

class Zombie{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);

	private:
		std::string	_name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif