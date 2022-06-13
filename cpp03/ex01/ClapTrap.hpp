/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:47:41 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/13 16:17:39 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &instance);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &instance);

		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			checkResources(void);


		std::string getName(void) const;
		int			getDamage(void) const;
		int			getHealth(void) const;
		int			getEnergy(void) const;
		void		setName(std::string name);
		void		setDamage(int damage);
		void		setHealth(int health);
		void		setEnergy(int energy);



	protected:
		std::string	_name;
		int			_damage;
		int			_health;
		int			_energy;
		int			_maxHealth;

};

#endif