/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:43:39 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/14 14:47:01 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONAGCAT_HPP
# define WRONAGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const &instance);
		WrongCat &operator=(WrongCat const &instance);

		void	makeSound(void) const;
};

#endif