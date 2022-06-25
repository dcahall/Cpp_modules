/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:06:23 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/25 19:37:52 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>

template <typename T>	
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &) {}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator = (MutantStack const &) { return *this; }

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void) { return this->c.begin(); }

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void) { return this->c.end(); }

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void) { return this->c.rend(); }

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void) { return this->c.rbegin(); }

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin(void) const { return this->c.begin(); }

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end(void) const { return this->c.end(); }

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend(void) const { return this->c.rend(); }

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin(void) const { return this->c.rbegin(); }
