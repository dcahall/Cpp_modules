/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:50:46 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/25 19:03:49 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &);
		~MutantStack(void);

		MutantStack	&operator = (MutantStack const &);

		typedef typename
			MutantStack<T>::container_type::iterator 				iterator;
		typedef typename
			MutantStack<T>::container_type::reverse_iterator 		reverse_iterator;
		typedef typename
			MutantStack<T>::container_type::const_iterator 			const_iterator;
		typedef typename
			MutantStack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator				begin(void);
		iterator				end(void);
		reverse_iterator		rend(void);
		reverse_iterator		rbegin(void);
		const_iterator			begin(void) const;
		const_iterator			end(void) const;
		const_reverse_iterator	rend(void) const;
		const_reverse_iterator	rbegin(void) const;

};

#include "MutantStack.tpp"
#endif