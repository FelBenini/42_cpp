/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:00:22 by fbenini-          #+#    #+#             */
/*   Updated: 2026/06/23 17:00:45 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


static Fixed	evaluateSide(const Point& v1, const Point& v2, const Point& p)
{
	// return cross product between an edge and a point:
	return (v2.getX() - v1.getX()) * (p.getY() - v1.getY()) -
		(v2.getY() - v1.getY()) * (p.getX() - v1.getX());
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	side1 = evaluateSide(a, b, point);
	Fixed	side2 = evaluateSide(b, c, point);
	Fixed	side3 = evaluateSide(c, a, point);

	if (side1 == 0 || side2 == 0 || side3 == 0)
		return false;

	bool	all_positive = (side1 > 0) && (side2 > 0) && (side3 > 0);
	bool	all_negative = (side1 < 0) && (side2 < 0) && (side3 < 0);
    return (all_positive || all_negative);
}

