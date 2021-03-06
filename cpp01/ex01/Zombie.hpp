/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:26:24 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 11:53:47 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include	<iomanip>
# include	<iostream>

class Zombie{
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif