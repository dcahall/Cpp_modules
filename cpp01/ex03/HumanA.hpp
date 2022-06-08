/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:40:14 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/07 12:33:03 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon	&weaponToSet);
		~HumanA();
		void	attack(void);
	private:
		Weapon		&_myWeapon;
		std::string	_name;
};

#endif