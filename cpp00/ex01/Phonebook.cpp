/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:41:55 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 21:52:30 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <ostream>

Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_qty = 0;
}

void	Phonebook::display_commands(void)
{
	std::cout << "Enter one of the following commands:" << std::endl;
	std::cout << "ADD // SEARCH // EXIT" << std::endl;
}

static std::string format_field(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void Phonebook::search_information(void)
{
	if (_qty == 0)
    {
		std::cout << "Phonebook is empty, please insert a contact with ADD.\n";
		return ;
	}
	std::cout << std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nickname" << std::endl;

	for (int i = 0; i < _qty; i++)
	{
		std::cout << std::setw(10) << _contacts[i].get_index() + 1 << "|"
				<< std::setw(10) << format_field(_contacts[i].get_firstname()) << "|"
				<< std::setw(10) << format_field(_contacts[i].get_surname()) << "|"
				<< std::setw(10) << format_field(_contacts[i].get_nickname())
				<< std::endl;
	}
}

void	Phonebook::insert_contact(void)
{
	std::string	firstname;
	std::string	surname;
	std::string	nickname;

	std::cout << "First name: ";
	std::getline(std::cin, firstname);
	std::cout << "Surname: ";
	std::getline(std::cin, surname);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);

	_contacts[_index].set_contact(_index, firstname, surname, nickname);
	_index = (_index + 1) % 8;
	if (_qty < 8)
		_qty++;
}
