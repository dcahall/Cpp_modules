/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:23:16 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/25 16:51:35 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include "Span.hpp"
# include <exception>
# include <vector>
# include <algorithm>
# include <iterator>

class Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &instance);
		~Span(void);

		Span	&operator = (Span const &instance);
		
		void	addNumber(int num);
		void	addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		int		shortestSpan(void) const;
		int		longestSpan(void);

	private:
		std::vector<int>	_ourVec;
		unsigned long		_numEl;
};

#endif