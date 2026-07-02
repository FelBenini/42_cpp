/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:01:19 by fbenini-          #+#    #+#             */
/*   Updated: 2026/06/23 18:01:27 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob("bob");
	ClapTrap	tom("tom");
	bob.attack("paul");
	tom.attack("bob");
	bob.takeDamage(5);
	bob.beRepaired(7);
	bob.takeDamage(5);
	tom.takeDamage(5);
	bob.takeDamage(5);
	tom.beRepaired(3);
	bob.takeDamage(8);
	return (0);
}
