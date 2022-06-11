/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 19:57:13 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/09 20:46:16 by dcahall          ###   ########.fr       */
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
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &instance);
		Fixed &operator=(const Fixed &instance);
		bool	operator==(const Fixed &instance) const;
		bool	operator!=(const Fixed &instance) const;
		bool	operator<(const Fixed &instance) const;
		bool	operator>(const Fixed &instance) const;
		bool	operator>=(const Fixed &instance) const;
		bool	operator<=(const Fixed &instance) const;
		
		Fixed	operator+(const Fixed &instance)const;
		Fixed	operator-(const Fixed &instance)const;
		Fixed	operator/(const Fixed &instance)const;
		Fixed	operator*(const Fixed &instance)const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed	min(Fixed const &instance1, Fixed const &instance2);
		static Fixed	min(Fixed &instance1, Fixed &instance2);
		static Fixed	max(Fixed const &instance1, Fixed const &instance2);
		static Fixed	max(Fixed &instance1, Fixed &instance2);

	private:
		int					_fixPointNum;
		static const int	_shiftBits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &instance);

#endif