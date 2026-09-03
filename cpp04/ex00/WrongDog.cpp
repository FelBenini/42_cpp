/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:15:11 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/03 17:44:28 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongDog::WrongDog(): WrongAnimal()
{
	std::cout << "WrongDog constructor called" << std::endl;
	this->type = "wrong dog";
}

WrongDog	&WrongDog::operator=(const WrongDog &other)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongDog::WrongDog(const WrongDog &other)
{
	std::cout << "WrongDog copy assignment operator called" << std::endl;
	this->type = other.type;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog class destructor called" << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
