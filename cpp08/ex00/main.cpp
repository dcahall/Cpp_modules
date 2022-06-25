/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:58:31 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/25 11:41:02 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

int main(void){
	std::vector<int> ourVec;

	for (int i = 0; i < 100; i++)
		ourVec.push_back(i);
	easyFind(ourVec, 99);
	easyFind(ourVec, 101);
	easyFind(ourVec, 10);	
	return 0;
}