/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:26:03 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/13 17:25:14 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void){
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << (Fixed(5.05f) > Fixed(5)) << std::endl;
	std::cout << (Fixed(5.05f) < Fixed(5)) << std::endl;
	std::cout << (Fixed(5.05f) == Fixed(5)) << std::endl;
	std::cout << (Fixed(5.05f) != Fixed(5)) << std::endl;
	std::cout << (Fixed(5.0f) >= Fixed(5)) << std::endl;
	std::cout << (Fixed(5.05f) != Fixed(5)) << std::endl << std::endl;


	std::cout << (Fixed(5.0f) + Fixed(5)) << std::endl;
	std::cout << (Fixed(5.05f) - Fixed(5)) << std::endl;
	std::cout << (Fixed(5.0f) * Fixed(5)) << std::endl;
	std::cout << (Fixed(5.0f) / Fixed(5)) << std::endl << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}