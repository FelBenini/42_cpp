/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:01:19 by fbenini-          #+#    #+#             */
/*   Updated: 2026/07/03 16:54:13 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
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
	return (0);
}
