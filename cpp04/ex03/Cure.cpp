/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:34:29 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 18:35:14 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(void): AMateria("cure")
{
}

Cure::~Cure(void)
{
}

Cure::Cure(Cure const &copy): AMateria(copy)
{
}

Cure const	&Cure::operator=(const Cure &copy)
{
	this->type = copy.type;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
