/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:38:49 by fbenini-          #+#    #+#             */
/*   Updated: 2026/08/24 17:15:11 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "animal";
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = other.type;
}

Animal::~Animal()
{
	std::cout << "Animal class destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Unknown sound" << std::endl;
}

const std::string	Animal::getType() const
{
	return (this->type);
}
