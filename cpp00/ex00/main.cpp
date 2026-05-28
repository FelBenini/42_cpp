/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:01:25 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 20:04:58 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <ostream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE." << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) {
		std::string str = argv[i];
    for (std::string::size_type i = 0; i < str.length(); ++i) {
        str[i] = (char)std::toupper((unsigned char)str[i]);
    }
		std::cout << str;
		if (i < argc - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
