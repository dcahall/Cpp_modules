/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:12:57 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/21 18:26:59 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "identify.hpp"

int main(void){
	srand(time(NULL));
	Base *tmp1;

	for(int i = 0; i < 5; i++)
	{
		tmp1 = generate();
		std::cout << "Identifying pointer #" << i << "   ";
		identify(tmp1);
		std::cout << "Identifying reference #" << i << " ";
		identify(*tmp1);
		std::cout << std::endl;
		delete tmp1;
	}
} 