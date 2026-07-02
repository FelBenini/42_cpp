/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:01:52 by fbenini-          #+#    #+#             */
/*   Updated: 2026/07/02 17:27:58 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name("John Doe"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{

	std::cout << "ClapTrap with name " << name <<  " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->name = other.name;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because it has no energy!" << std::endl;
		return ;
	}
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because it has no hit points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacked the target " << target << std::endl;
	this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->name << " is already dead and has 0 hit points" << std::endl;
		return ;
	}
	if (this->hitPoints > amount)
		this->hitPoints -= amount;
	else
		this->hitPoints = 0;
	std::cout << this->name << " was attacked and lost " << amount << " hit point, he now has " << this->hitPoints << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->name << " is dead and can't repair itself" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	std::cout << this->name << " repaired itself "<< amount << " times, and now has " << this->hitPoints << " hit points" << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return (this->attackDamage);
}
