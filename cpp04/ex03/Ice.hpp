/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:27:12 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 11:46:36 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &instance);
		~Ice(void);

		Ice			&operator=(Ice const &instance);
		
		AMateria	*clone(void) const;
		void		use(ICharacter &target);

};

#endif
