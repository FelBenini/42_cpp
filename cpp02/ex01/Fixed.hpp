/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 21:11:13 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/21 23:52:40 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>
class	Fixed
{
	private:
		int					_value;
		static const int	_fractional_bits = 8;
		
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
};

std::ostream &operator<<(std::ostream &stream, Fixed const &input);

#endif
