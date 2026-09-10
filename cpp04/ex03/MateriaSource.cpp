/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:02:44 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 19:29:15 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void): inventory()
{
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &copy)
    : IMateriaSource(copy), inventory()
{
    for (int i = 0; i < 4; i++)
    {
        if (copy.inventory[i])
            this->inventory[i] = copy.inventory[i]->clone();
    }
}

MateriaSource const &MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
        {
            delete this->inventory[i];
            this->inventory[i] = NULL;

            if (copy.inventory[i])
                this->inventory[i] = copy.inventory[i]->clone();
        }
    }
    return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia && this->inventory[i] == NULL)
		{
			this->inventory[i] = materia;
			return ;
		}
	}
	if (materia)
		std::cout << "Cannot learn materia, inventory for MateriaSource is full!" << std::endl;
	else
		std::cout << "Cannot learn invalid materia" << std::endl;
	if (!this->inLearnInventory(materia))
		delete materia;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] && this->inventory[i]->getType() == type)
			return (this->inventory[i]->clone());
	}
	std::cout << "Cannot create materia, " << type << " is invalid!" << std::endl;
	return (0);
}

int MateriaSource::inLearnInventory(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == materia)
			return (1);
	}
	return (0);
}
