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
#include <cstdlib>
#include <string>
#include <sstream>

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
	std::string	index;
	int			int_index;

	if (_qty == 0)
    {
		std::cout << "Phonebook is empty, please insert a contact with ADD.\n";
		return ;
	}
	std::cout << std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "phone num" << "|"
				<< std::setw(10) << "nickname" << "|"
				<< std::endl;

	for (int i = 0; i < _qty; i++)
	{
		std::cout << std::setw(10) << _contacts[i].get_index() << "|"
				<< std::setw(10) << format_field(_contacts[i].get_firstname()) << "|"
				<< std::setw(10) << format_field(_contacts[i].get_surname()) << "|"
				<< std::setw(10) << format_field(_contacts[i].get_phonenumber()) << "|"
				<< std::setw(10) << format_field(_contacts[i].get_nickname()) << "|"
				<< std::endl;
	}
	std::cout << "Insert index: ";
	std::getline(std::cin, index);
	std::stringstream ss(index);
	if (!(ss >> int_index) || !(ss.eof()))
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	if (int_index < 0 || int_index >= _qty)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cout << "Index: " << _contacts[int_index].get_index() << std::endl
		<< "First name: " << format_field(_contacts[int_index].get_firstname()) << std::endl
		<< "Last name: " << format_field(_contacts[int_index].get_surname()) << std::endl
		<< "Phone number: " << format_field(_contacts[int_index].get_phonenumber()) << std::endl
		<< "Nickname: " << format_field(_contacts[int_index].get_nickname()) << std::endl
		<< "Darkest secret: " << format_field(_contacts[int_index].get_secret()) << std::endl;
}

void	Phonebook::insert_contact(void)
{
	std::string	firstname;
	std::string	surname;
	std::string	nickname;
	std::string phonenumber;
	std::string	secret;

	std::cout << "First name: ";
	std::getline(std::cin, firstname);
	std::cout << "Surname: ";
	std::getline(std::cin, surname);
	std::cout << "Phone number: ";
	std::getline(std::cin, phonenumber);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Darkest secret: ";
		std::getline(std::cin, secret);

	_contacts[_index].set_contact(_index, firstname, surname, phonenumber, nickname, secret);
	_index = (_index + 1) % 8;
	if (_qty < 8)
		_qty++;
}
