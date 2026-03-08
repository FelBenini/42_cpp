/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:43:44 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 21:48:56 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

Contact::Contact(void)
{
	this->_firstname = std::string();
	this->_surname = std::string();
	this->_nickname = std::string();
	return ;
}

void	Contact::set_contact(int index, std::string firstname, std::string surname,
		std::string nickname)
{
    this->_index = index;
    this->_firstname = firstname;
    this->_surname = surname;
    this->_nickname = nickname;
}

int	Contact::get_index(void)
{
	return (this->_index);
}

std::string	Contact::get_firstname(void)
{
	return (this->_firstname);
}

std::string	Contact::get_surname(void)
{
	return (this->_firstname);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}
