/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:42:55 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/22 13:05:09 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class Type>
void	swap(Type &a, Type &b){
	Type c;

	c = a;
	a = b;
	b = c;
};

template <class Type>
Type	min(Type a, Type b){
	return a < b ? a : b;
};

template <class Type>
Type	max(Type a, Type b){
	return a > b ? a : b;
};

#endif