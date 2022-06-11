/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:26:03 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/11 15:17:11 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int	main(void){
	{
		if (bsp(Point(4, 0), Point(-4, 0), Point(0, 4), Point(-1, 0)))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl;
	}
	{
		if (bsp(Point(4, 0), Point(-4, 0), Point(0, 4), Point(0, 0)))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl;
	}
	{
		if (bsp(Point(4, 0), Point(-4, 0), Point(0, 4), Point(0, 1)))
			std::cout << "Inside" << std::endl;
		else
			std::cout << "Outside" << std::endl;
	}
}