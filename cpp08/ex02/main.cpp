/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:57:54 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/25 19:38:17 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <iostream>

int main()
{
	MutantStack<int>	mstack;
	std::vector<int>	vect;

	mstack.push(5);
	mstack.push(17);

	vect.push_back(5);
	vect.push_back(17);

	std::cout << "Vector's top " << vect.back() << std::endl;
	std::cout << "Stack't top " << mstack.top() << std::endl;

	mstack.pop();
	vect.pop_back();

	std::cout << "Vector size: " << vect.size() << std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	vect.push_back(3);
	vect.push_back(5);
	vect.push_back(737);
	vect.push_back(0);	

	std::cout << "\nStack content:\n";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
	
	std::cout << "\nVector content:\n";
	for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;
	
	std::cout << "\nReverse iterator stack:\n";
	for (MutantStack<int>::reverse_iterator it = mstack.rbegin(); it != mstack.rend(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;

	std::cout << "\nReverse iterator vector:\n";
	for (std::vector<int>::reverse_iterator it = vect.rbegin(); it != vect.rend(); ++it)
		std::cout << " " << *it;
	std::cout << std::endl;	

	std::cout << "\nDeep copy (reverse order becasuse it's Stack):\n";
	std::stack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << " " << s.top();
		s.pop();
	}

	return 0;
}