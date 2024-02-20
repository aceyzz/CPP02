/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:32:21 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/20 11:31:31 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	sign(const Point &a, const Point &b, const Point &c, const Point &d)
{
	Fixed	result;

	result = (b.getX() - a.getX()) * (d.getY() - c.getY()) - (d.getX() - c.getX()) * (b.getY() - a.getY());
	return (result > 0);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	d1, d2, d3;
	
	d1 = sign(a, point, a, b);
	d2 = sign(b, point, b, c);
	d3 = sign(c, point, c, a);

	return (d1 == d2 && d2 == d3);
}
