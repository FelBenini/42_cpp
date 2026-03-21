/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:29:03 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/21 20:31:16 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	std::cout << "Debug:" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Info:" << std::endl;
	harl.complain("INFO");
	std::cout << "Warning:" << std::endl;
	harl.complain("WARNING");
	std::cout << "Error:" << std::endl;
	harl.complain("ERROR");
	std::cout << "No Level:" << std::endl;
	harl.complain("FOO");
	return (0);
}
