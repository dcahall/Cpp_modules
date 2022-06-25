/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:50:25 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/25 11:40:27 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

class NoSuchElem: public std::exception
{
	public:
		const char* what() const throw();
};

const char* NoSuchElem::what() const throw(){
	return "No such element";
}


template <class T>
void	easyFind(T ourVec, int occurance){
	typename T::iterator	it;
	try
	{
		it = std::find(ourVec.begin(), ourVec.end(), occurance);
		if (it == ourVec.end())
		    throw NoSuchElem();
		std::cout << "Element found in myvector: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}