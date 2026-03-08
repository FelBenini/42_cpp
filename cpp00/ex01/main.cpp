/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:33:37 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 21:54:27 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Phonebook	phonebook;
	std::string	cmd;

	phonebook.display_commands();
	while (std::getline(std::cin, cmd))
	{
		if (std::cin.eof() == true || cmd.compare("EXIT") == 0)
		{
			std::cout << "Leaving now. Bye!" << std::endl;
			return (0);
		}
		else if (cmd.compare("ADD") == 0)
			phonebook.insert_contact();
		else if (cmd.compare("SEARCH") == 0)
			phonebook.search_information();
		else
			std::cout << "Unknown command." << std::endl;
		phonebook.display_commands();
	}
	return (0);
}
