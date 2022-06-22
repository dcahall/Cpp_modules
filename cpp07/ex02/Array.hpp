/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:24:25 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/22 19:05:35 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>
# include <stdexcept>

template <class T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array<T> const &instance);
		~Array(void);

		Array<T>	&operator = (Array<T> const &instance);
		T			&operator [] (unsigned i);
	
		unsigned int	size(void) const;

	private:
		T				*_arr;
		unsigned int	_size;
};

template<class T>
std::ostream &operator << (std::ostream &out, const Array<T> &a);

#include "Array.tpp"
#endif