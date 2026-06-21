/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 13:09:21 by fbenini-          #+#    #+#             */
/*   Updated: 2026/06/15 13:51:17 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed(void)
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	this->_value = other.getRawBits();
}

Fixed::Fixed(const int input)
{
	this->_value = input << this->_fractional_bits;
}

Fixed::Fixed(const float input)
{
	this->_value = (int)roundf(input * (1 << this->_fractional_bits));
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->_value = other.getRawBits();
	return (*this);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fractional_bits);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &input)
{
	stream << input.toFloat();
	return (stream);
}

Fixed	Fixed::operator+(const Fixed &other) const
{
    Fixed	result;
    result.setRawBits(this->getRawBits() + other.getRawBits());
    return	result;
}

Fixed	Fixed::operator-(const Fixed &other) const
{
    Fixed	result;
    result.setRawBits(this->getRawBits() - other.getRawBits());
    return	result;
}


Fixed	Fixed::operator*(const Fixed& other) const
{
	long long	tmp;
	Fixed		result;

	tmp = static_cast<long long>(this->_value) * static_cast<long long>(other.getRawBits());
    tmp += 1 << (_fractional_bits - 1);
    tmp >>= _fractional_bits;
    result.setRawBits(static_cast<int>(tmp));
    return result;
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	long long	dividend;
	long long	divisor;
	Fixed		result;

	dividend = static_cast<long long>(this->_value) << this->_fractional_bits;
	divisor = static_cast<long long>(other.getRawBits());
	dividend += (divisor >> 1);
    result.setRawBits(static_cast<int>(dividend / divisor));
    return result;
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_value == other._value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_value <= other._value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_value < other._value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_value > other._value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_value != other._value);
}
