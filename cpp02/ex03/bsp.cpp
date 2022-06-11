/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:06 by dcahall           #+#    #+#             */
/*   Updated: 2022/06/11 14:50:55 by dcahall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(Point const a, Point const b, Point const c){
	float area = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())\
				 + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())\
				 + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f;
	return (area >= 0 ? area : area * (-1));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	float	ABCarea = area(a, b, c);
	float	ABParea = area(a, b, point);
	float	ACParea = area(a, c, point);
	float	BCParea = area(b, c, point);

	return (ABCarea == (ABParea + ACParea + BCParea) && BCParea != 0\
			&& ABParea != 0 && ACParea != 0);
}
