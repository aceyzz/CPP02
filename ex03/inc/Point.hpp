/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:10:38 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/20 10:53:58 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "Fixed.hpp"

class	Point
{
	public:
		Point();
		Point(const float x1, const float y1);
		Point(const Point &p);
		Point &operator=(const Point &p);
		~Point();
		Fixed const getX(void) const;
		Fixed const getY(void) const;
	private:
		Fixed const _x;
		Fixed const _y;
		//Fixed _x;
		//Fixed _y;
};

#endif
