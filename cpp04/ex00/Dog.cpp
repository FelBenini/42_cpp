/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:15:11 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/03 17:15:40 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(): Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "dog";
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;
}

Dog::~Dog()
{
	std::cout << "Dog class destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
