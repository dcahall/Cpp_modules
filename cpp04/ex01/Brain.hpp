/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:30:44 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 16:33:03 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const &instance);
		Brain &operator=(Brain const &instance);

		std::string	getIdea(int index) const;

	private:
		std::string	_ideas[100];
};


#endif