/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 21:19:48 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/21 23:41:00 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
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

Fixed::~Fixed(void)
{
	std::cout << "deconstructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called" << std::endl;
	this->_value = raw;
}

Fixed & Fixed::operator=(const Fixed &other)
{
	std::cout << "assignment operator function called" << std::endl;
	this->_value = other.getRawBits();
	return (*this);
}
