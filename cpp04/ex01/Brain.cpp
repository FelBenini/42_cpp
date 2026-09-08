/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:55:29 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/03 18:09:52 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "random idea";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string type)
{
	std::string	idea;

	if (type.compare("dog") == 0)
		idea = "sausages";
	else if (type.compare("cat") == 0)
		idea = "fishes";
	else
		idea = "random idea";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
	std::cout << "Brain for " << type << " type constructor called" << std::endl;
}

Brain const &Brain::operator=(Brain const &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

Brain::Brain(Brain const &other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(size_t idx, std::string idea)
{
	if (idx < 100)
		this->ideas[idx] = idea;
}

std::string	Brain::getIdea(size_t idx) const
{
	if (idx < 100)
		return (ideas[idx]);
	return ("invalid index");
}
