/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:44:19 by fbenini-          #+#    #+#             */
/*   Updated: 2026/06/23 17:44:20 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>
class	Fixed
{
	private:
		int					_value;
		static const int	_fractional_bits = 16;
		
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int input);
		Fixed(const float input);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);
		static Fixed&		min(Fixed& num1, Fixed& num2);
		static Fixed&		max(Fixed& num1, Fixed& num2);
		static const Fixed&	min(const Fixed& num1, const Fixed& num2);
		static const Fixed&	max(const Fixed& num1, const Fixed& num2);
};

std::ostream &operator<<(std::ostream &stream, Fixed const &input);

#endif
