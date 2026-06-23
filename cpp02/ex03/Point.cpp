/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:40:46 by fbenini-          #+#    #+#             */
/*   Updated: 2026/06/23 16:54:56 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(const float x, const float y): x(x), y(y)
{
}

Point::~Point()
{
}

Point::Point(const Point &other): x(other.getX()), y(other.getY())
{
}

Point	&Point::operator=(const Point &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

const Fixed&	Point::getX() const
{
	return (this->x);
}

const Fixed&	Point::getY() const
{
	return (this->y);
}
