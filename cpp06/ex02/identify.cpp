/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:02:53 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/21 18:24:24 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){

    switch((rand() / 13)% 3)
    {
        case 0: return dynamic_cast<Base *>(new A);
        case 1: return dynamic_cast<Base *>(new B);
        case 2: return dynamic_cast<Base *>(new C);
    }
	return 0;
}

void    identify(Base* p){
	if (dynamic_cast<A *>(p))
		std::cout << "It's A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "It's B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "It's C\n";
	else	
		std::cout << "unknown type\n";
}

void	identify(Base& p){
	Base tmp;
	try
	{
		tmp = dynamic_cast<A &>(p);
		(void)tmp;
		std::cout << "It's A\n";	
	}
	catch(...) {}
	try
	{
		tmp = dynamic_cast<B &>(p);
		(void)tmp;
		std::cout << "It's B\n";	
	}
	catch(...) {}
	try
	{
		tmp = dynamic_cast<C &>(p);
		(void)tmp;
		std::cout << "It's C\n";	
	}
	catch(...) {}
}