/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 21:19:48 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/22 00:03:10 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "copy constructor called" << std::endl;
	this->_value = other.getRawBits();
}

Fixed::Fixed(const int input)
{
	std::cout << "integer constructor called" << std::endl;
	this->_value = input << this->_fractional_bits;
}

Fixed::Fixed(const float input)
{
	std::cout << "float constructor called" << std::endl;
	this->_value = (int)roundf(input * (1 << this->_fractional_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "deconstructor called" << std::endl;
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
	std::cout << "assignment operator function called" << std::endl;
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
