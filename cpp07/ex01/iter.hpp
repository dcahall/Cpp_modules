/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:44:58 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/22 16:08:34 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<class A>
void	print(A val){
	std::cout << val << std::endl;
};

template<class A, class S>
void	iter(A array[], S length, void (*func)(A &)){
	for (S i = 0; i < length; i++)
		func(array[i]);
};

#endif