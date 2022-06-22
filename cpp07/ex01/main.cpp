/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:59:58 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/22 18:10:14 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
class Awesome {

	public:

		Awesome( void ): _n(42) {}

		int	getN( void ) const { return this->_n; }

	private:

		int _n;

};

std::ostream &operator<<(std::ostream &out, const Awesome &instance){
	out << instance.getN();
	
	return (out);
}

int main( void ) {

	int	tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];
	std::string tab3[] = {"1", "2", "3", "4", "5",};

	iter<int, int>(tab, 5, print);
	iter<Awesome, int>(tab2, 5, print);
	iter<std::string, int>(tab3, 5, print);

	return 0;
}
