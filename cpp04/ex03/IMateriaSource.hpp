/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:48:24 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 11:46:25 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"
# include <iostream>

class Amateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) {};
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif