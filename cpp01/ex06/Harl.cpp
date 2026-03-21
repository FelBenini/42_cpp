/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:31:23 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/21 20:51:28 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!";
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;

}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string complaint)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			level;
	void (Harl::*fptr[4])() = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};
	for (level = 0; level < 4; level++)
	{
		if (levels[level] == complaint)
			break ;
	}
	if (level >= 4)
	{
		std::cout << "[ INVALID LEVEL ]" << std::endl;
		return ;
	}
	for (int i = level; i < 4; i++)
	{
		std::cout << "[ " << levels[i] << " ]" << std::endl;
		(this->*fptr[i])();
	}
}


