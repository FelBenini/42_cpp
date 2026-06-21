/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 21:10:29 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/21 23:50:10 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	// Basic operations
	Fixed a;
	Fixed const b(Fixed(5.05f) + Fixed(2));
	std::cout << b << std::endl;
	a = a - b;
	std::cout << a << std::endl;
	std::cout << Fixed(5.05f) * Fixed(2) << std::endl;
	std::cout << Fixed(9) / Fixed(2) << std::endl;

	std::cout << std::endl << "Comparison operators: " << std::endl;
	std::cout << "3.1 == 2.4: " << (Fixed(3.1f) == Fixed(2.4f)) << std::endl;
	std::cout << "9.5f == 9.5f: " << (Fixed(9.5f) == Fixed(9.5f)) << std::endl;
	std::cout << "3.1 != 2.4: " << (Fixed(3.1f) != Fixed(2.4f)) << std::endl;
	std::cout << "9.5f != 9.5f: " << (Fixed(9.5f) != Fixed(9.5f)) << std::endl;
	std::cout << "3.1 <= 2.4: " << (Fixed(3.1f) <= Fixed(2.4f)) << std::endl;
	std::cout << "9.5f <= 9.5f: " << (Fixed(9.5f) <= Fixed(9.5f)) << std::endl;
	std::cout << "3.1 < 2.4: " << (Fixed(3.1f) < Fixed(2.4f)) << std::endl;
	std::cout << "9.5f < 9.5f: " << (Fixed(9.5f) < Fixed(9.5f)) << std::endl;
	std::cout << "3.1 >= 2.4: " << (Fixed(3.1f) >= Fixed(2.4f)) << std::endl;
	std::cout << "9.5f >= 9.5f: " << (Fixed(9.5f) >= Fixed(9.5f)) << std::endl;
	std::cout << "3.1 > 2.4: " << (Fixed(3.1f) > Fixed(2.4f)) << std::endl;
	std::cout << "9.5f > 9.5f: " << (Fixed(9.5f) > Fixed(9.5f)) << std::endl;

	std::cout << std::endl << "Incrmenetal and decremental operators: " << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: "<< a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: "<< a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: "<< a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: "<< a << std::endl;

	Fixed const min(3.02f);
	Fixed const max(4.8f);
	std::cout << std::endl << "min and max: " << std::endl;
	std::cout << "Min between 3.02 and 4.8: " << Fixed::min(min, max) << std::endl;
	std::cout << "Max between 3.02 and 4.8: " << Fixed::max(min, max) << std::endl;
	return (0);
}
