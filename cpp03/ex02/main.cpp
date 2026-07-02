/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:01:19 by fbenini-          #+#    #+#             */
/*   Updated: 2026/07/02 17:28:44 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "========================== TESTING CLAVTRAP ==========================" << std::endl;
	ClapTrap	john("john");
	ClapTrap	jane("jane");
	john.attack("paul");
	jane.attack("john");
	john.takeDamage(5);
	john.beRepaired(7);
	john.takeDamage(5);
	jane.takeDamage(5);
	john.takeDamage(5);
	jane.beRepaired(3);
	jane.takeDamage(8);

	std::cout << "========================== TESTING SCAVTRAP ==========================" << std::endl;
	ScavTrap	bob("bob");
	ScavTrap	tom("tom");
	bob.attack("paul");
	tom.attack("bob");
	bob.takeDamage(5);
	bob.beRepaired(7);
	bob.takeDamage(5);
	tom.takeDamage(5);
	bob.guardGate();
	bob.takeDamage(5);
	tom.beRepaired(3);
	bob.takeDamage(8);
	tom.guardGate();

	std::cout << "========================== TESTING FRAGTRAP ==========================" << std::endl;
	FragTrap	paul("paul");
	FragTrap	mary("mary");
	paul.attack("bob");
	mary.attack("tom");
	mary.takeDamage(5);
	paul.beRepaired(7);
	paul.takeDamage(5);
	mary.takeDamage(5);
	paul.highFivesGuys();
	paul.takeDamage(5);
	mary.beRepaired(3);
	paul.takeDamage(8);
	mary.highFivesGuys();
	return (0);
}
