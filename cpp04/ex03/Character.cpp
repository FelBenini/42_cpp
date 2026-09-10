/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:02:17 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 19:26:16 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const &name): name(name), inventory()
{
}

Character::Character(void): name("John Doe"), inventory()
{
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character::Character(Character const &copy): ICharacter(copy), inventory()
{
	this->name = copy.name;
	for (int i = 0; i < 4; i++)
	{
		if (copy.inventory[i])
			this->inventory[i] = copy.inventory[i]->clone();
	}
}

Character const	&Character::operator=(const Character &copy)
{
	this->name = copy.name;
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return;
		}
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}

bool Character::inInventory(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == m)
			return true;
	}
	return false;
}
