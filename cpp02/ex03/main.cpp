/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:44:08 by fbenini-          #+#    #+#             */
/*   Updated: 2026/06/23 17:44:08 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>
#include <string>
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

void	runTest(const std::string& testName, const Point& a, const Point& b, const Point& c, const Point& p, bool expected)
{
	bool result = bsp(a, b, c, p);

	std::string resultStr = "TRUE";
	if (!result)
		resultStr = "FALSE";
	std::string expectedStr = "TRUE";
	if (!expected)
		expectedStr = "FALSE";

	std::cout << std::left << std::setw(35) << testName 
				<< " | Obtido: " << std::setw(5) << resultStr
				<< " | Esperado: " << std::setw(5) << expectedStr
				<< std::endl;
}

int main() {
	Point	a(0.0f, 0.0f);
	Point	b(4.0f, 0.0f);
	Point	c(0.0f, 4.0f);


	runTest("Point exactly in the center", a, b, c, Point(1.0f, 1.0f), true);
	runTest("Inside point next to AB", a, b, c, Point(2.0f, 0.1f), true);
	runTest("Inside point next to AC", a, b, c, Point(0.1f, 2.0f), true);

	runTest("Point far away", a, b, c, Point(10.0f, 10.0f), false);
	runTest("Point outside", a, b, c, Point(-1.0f, 1.0f), false);
	runTest("Point outside", a, b, c, Point(2.0f, -0.5f), false);
	runTest("Point outside", a, b, c, Point(3.0f, 3.0f), false);

	runTest("Point standing on edge AB", a, b, c, Point(2.0f, 0.0f), false);
	runTest("Point on vertex A", a, b, c, Point(0.0f, 0.0f), false);
	runTest("Point on vertex B", a, b, c, Point(4.0f, 0.0f), false);
	runTest("Point standing on hypotenuse BC", a, b, c, Point(2.0f, 2.0f), false);

	runTest("Point in the center (Vertex ACB)", a, c, b, Point(1.0f, 1.0f), true);
	runTest("Point outside (Vertex ACB)", a, c, b, Point(5.0f, 5.0f), false);

    return 0;
}
