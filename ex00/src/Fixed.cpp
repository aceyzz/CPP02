/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 08:22:48 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/18 08:44:26 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << GRY "Default constructor called" RST << std::endl;
}

Fixed::Fixed(const Fixed &f) : _value(f._value)
{
	std::cout << GRY "Copy constructor called" RST << std::endl;
}

Fixed& Fixed::operator=(const Fixed &f)
{
	std::cout << GRY "Copy assignment operator called" RST << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << GRY "Destructor called" RST << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << GRY "getRawBits member function called" RST << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << GRY "setRawBits member function called" RST << std::endl;
	this->_value = raw;
}
