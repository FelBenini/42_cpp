/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:12:50 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/03 18:27:58 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(): Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "cat";
	this->brain = new Brain(this->type);
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(this->type);
	}
	return (*this);
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat class destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return this->brain;
}
