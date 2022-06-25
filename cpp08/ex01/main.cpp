/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 14:07:18 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/25 14:33:27 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

int main() {

	/*test with addNumber func with 1 param*/
   	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		/* test addnumber functions */
		std::cout << "addNumber with 1 param:" << std::endl;
		std::cout << "    Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "    Longest span: " << sp.longestSpan() << std::endl;
	}

	/* test with addNumber func with range of iterators */
	{
		Span sp = Span(10000);
		std::vector<int> vec;

		for (int i = 0; i < 10000; i++)
			vec.push_back(i + 1);

		sp.addNumber(vec.begin(), vec.end());
		
		std::cout << "addNumber with range of iterators:" << std::endl;
		std::cout << "    Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "    Longest span: " << sp.longestSpan() << std::endl;

		/* Push more than allowed */
		std::cout << "Push more than allowed:" << std::endl;
		try {
			Span span = Span(5);
			span.addNumber(vec.begin(), vec.end());
		} catch (std::exception &e) {
			std::cerr << "    " << e.what() << std::endl;
		}
}

	/* Throw exceptions */
	{
		Span sp = Span(5);

		/* Using of empty vector */
		std::cout << "Empty vector:" << std::endl;
		try { sp.shortestSpan(); } 
		catch (std::exception &e) {
			std::cerr << "    " << e.what() << std::endl; 
		}	
		
		try { sp.longestSpan(); }
		catch (std::exception &e) {
			std::cerr  << "    " << e.what() << std::endl;
		}

		/* Using of vector with 1 element*/
		sp.addNumber(1);

		std::cout << "Vector with 1 element:" << std::endl;
		try { sp.shortestSpan(); }
		catch (std::exception &e) {
			std::cerr  << "    " << e.what() << std::endl;
		}
		
		try { sp.longestSpan(); }
		catch (std::exception &e) {
			std::cerr  << "    " << e.what() << std::endl;
		}
	}

	return 0;
}