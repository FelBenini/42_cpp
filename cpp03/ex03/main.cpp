/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:01:19 by fbenini-          #+#    #+#             */
/*   Updated: 2026/07/03 15:25:55 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "========================== TESTING CLAPTRAP ==========================" << std::endl;
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

	std::cout << "========================== TESTING DIAMONDTRAP ==========================" << std::endl;
	DiamondTrap	james("james");
	DiamondTrap	sarah("sarah");
	james.whoAmI();
	sarah.whoAmI();
	james.attack("sarah");
	sarah.attack("james");
	james.takeDamage(30);
	james.beRepaired(15);
	james.takeDamage(30);
	sarah.takeDamage(20);
	james.takeDamage(30);
	sarah.beRepaired(10);
	sarah.takeDamage(50);
	james.guardGate();
	sarah.highFivesGuys();
	return (0);
}
