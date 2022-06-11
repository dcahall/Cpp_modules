/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:57:13 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/09 15:42:29 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &instance);
		Fixed &operator=(const Fixed &instance);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_fixPointNum;
		static const int	_shiftBits;
};

#endif