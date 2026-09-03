/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:12:50 by fbenini-          #+#    #+#             */
/*   Updated: 2026/08/24 17:16:29 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "cat";
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
}

Cat::~Cat()
{
	std::cout << "Cat class destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}
