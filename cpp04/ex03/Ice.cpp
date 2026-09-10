/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:06:14 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 18:11:48 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(void): AMateria("ice")
{
}

Ice::~Ice(void)
{
}

Ice::Ice(Ice const &copy): AMateria(copy)
{
}

Ice const	&Ice::operator=(const Ice &copy)
{
	this->type = copy.type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

