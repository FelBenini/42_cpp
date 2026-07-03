/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:01:19 by fbenini-          #+#    #+#             */
/*   Updated: 2026/07/03 16:54:33 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "========================== TESTING CLAPTRAP ==========================" << std::endl;
	ClapTrap	john("john");
	ClapTrap	clone(john);
	ClapTrap	jane("jane");
	ClapTrap	clone2 = jane;
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
	ScavTrap	bob_clone(bob);
	ScavTrap	tom("tom");
	ScavTrap	tom_clone = tom;
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
	return (0);
}
