/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 08:16:32 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/18 09:18:04 by cedmulle         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &f);
		~Fixed();
		int	 getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int	_value;
		static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif
