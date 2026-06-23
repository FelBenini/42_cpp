/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 16:36:06 by fbenini-          #+#    #+#             */
/*   Updated: 2026/06/23 16:50:16 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point(const Point &other);
		Point		&operator=(const Point &other);
		const Fixed	&getX(void) const;
		const Fixed	&getY(void) const;
};

#endif
