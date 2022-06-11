/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:08:42 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/11 14:50:02 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(float const x, float const y);
		~Point(void);

		Point(const Point &instance);
		Point &operator=(const Point &instance);
	
		Fixed const getX(void) const;
		Fixed const getY(void) const;		
	private:
		Fixed const _x;
		Fixed const _y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif