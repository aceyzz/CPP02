/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 08:16:32 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/20 10:30:03 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

# define RST "\033[0m"
# define GRY "\033[1;30m"
# define RED "\033[1;31m"
# define GRE "\033[1;32m"
# define YEL "\033[1;33m"
# define BLU "\033[1;34m"
# define MAG "\033[1;35m"
# define CYA "\033[1;36m"
# define WHI "\033[1;37m"
# define CLEAR "\033[2J\033[3J\033[H"

class	Fixed
{
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &f);
		~Fixed();
		Fixed &operator=(const Fixed &f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		// EX02 CONTRIBUTION 
		// - Compare operators
		bool operator>(const Fixed &f) const;
		bool operator<(const Fixed &f) const;
		bool operator>=(const Fixed &f) const;
		bool operator<=(const Fixed &f) const;
		bool operator==(const Fixed &f) const;
		bool operator!=(const Fixed &f) const;

		// Arithmetic operators
		Fixed operator+(const Fixed &f) const;
		Fixed operator-(const Fixed &f) const;
		Fixed operator*(const Fixed &f) const;
		Fixed operator/(const Fixed &f) const;

		// Incre/Decrementation operators
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		// Member functions
		static			Fixed	&min(Fixed &f1, Fixed &f2);
		static const	Fixed	&min(const Fixed &f1, const Fixed &f2);
		static			Fixed	&max(Fixed &f1, Fixed &f2);
		static const	Fixed	&max(const Fixed &f1, const Fixed &f2);

	private:
		int	_value;
		static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif
