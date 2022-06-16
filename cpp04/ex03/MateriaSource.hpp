/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:25:32 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/16 11:46:16 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

class Amateria;

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &instance);
		~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &instance);

		void			learnMateria(AMateria *);
		AMateria		*createMateria(std::string const & type);

	private:
		AMateria	*_materias[4];
};

#endif