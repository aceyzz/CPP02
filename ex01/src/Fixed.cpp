/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 08:22:48 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/18 09:33:02 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << GRY "Default constructor called" RST << std::endl;
}

// Surcharge Constructor int, decale les bits a gauche (la virgule vers la droite)
Fixed::Fixed(const int val)
{
	std::cout << GRY "Int constructor called" RST << std::endl;
	int	result = val;
	for (int i = this->_bits; i > 0; i--)
		result *= 2;
	this->_value = result;
}

// Surcharge Constructor float, decale les bits a gauche (la virgule vers la droite)
Fixed::Fixed(const float val)
{
	std::cout << GRY "Float constructor called" RST << std::endl;
	float result = val;
	for (int i = this->_bits; i > 0; i--)
		result *= 2;
	this->_value = roundf(result);
}

Fixed::Fixed(const Fixed &f) : _value(f._value)
{
	std::cout << GRY "Copy constructor called" RST << std::endl;
}

Fixed& Fixed::operator=(const Fixed &f)
{
	std::cout << GRY "Copy assignment operator called" RST << std::endl;
	this->_value = f._value;
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

// Methode pour decaler tout les bits a droite (la virgule vers la gauche)
float	Fixed::toFloat(void) const
{
	float result = this->_value;
	for (int i = this->_bits; i > 0; i--)
		result /= 2;
	return (result);
}

// Methode pour decaler tout les bits a droite (la virgule vers la gauche)
int	Fixed::toInt(void) const
{
	int result = this->_value;
	for (int i = this->_bits; i > 0; i--)
		result /= 2;
	return (result);
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}
