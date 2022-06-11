/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:57:13 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/09 17:41:39 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(const int	num);
		Fixed(const float num);
		Fixed();
		~Fixed();
		Fixed(const Fixed &instance);
		Fixed	&operator=(const Fixed &instance);
		bool	operator==(const Fixed &instance);
		

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixPointNum;
		static const int	_shiftBits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &instance);

#endif