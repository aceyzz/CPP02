/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:19:02 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/20 10:55:52 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
: _x(Fixed(0)), _y(Fixed(0))
{
	// std::cout << "Default constructor (_x = 0 & _y = 0)" << std::endl;
}

Point::Point(const float x1, const float y1)
: _x(Fixed(x1)), _y(Fixed(y1)) 
{
	// std::cout << "Point constructor with 2 floats" << std::endl;
}

Point::Point(const Point &p)
: _x(p._x), _y(p._y)
{
	// std::cout << "Point constructor with copy" << std::endl;
}

Point&	Point::operator=(const Point &p)
{
	/* PROBLEME DANS LE SUJET
		On nous demande de creer deux membre private constants Fixed _x et Fixed _y
		Comment leur attribuer une valeur apres construction si constants ? (WTF)
		Jai 2 solutions :
		- afficher message d'erreur si tentative d'assignements apres construction
		- Enlever les const des attributs _x et _y, et faire l'assignation
	*/
	/* SOLUTION 1 */
	(void)p;
	std::cout << YEL "Assignation impossible d'attributs constants. ";
	std::cout << " Attribution des valeurs par Constructor obligatoire." RST << std::endl;
	/* SOLUTION 2 */
	// this->_x = p._x;
	// this->_y = p._y;
	return (*this);
}

Point::~Point(void)
{
	// std::cout << "Destructor called Point" << std::endl;
}

Fixed const	Point::getX(void) const
{
	return (this->_x);
}

Fixed const	Point::getY(void) const
{
	return (this->_y);
}
