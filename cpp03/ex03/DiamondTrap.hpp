/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:09:52 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/13 16:45:14 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap 
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &instance);
		~DiamondTrap(void);
		DiamondTrap &operator=(DiamondTrap const &instance);

		using	FragTrap::_health;
		using	ScavTrap::_energy;
		using	FragTrap::_damage;
		using	ScavTrap::attack;

		void		whoAmI(void);

	private:
		std::string	_name;
};

#endif