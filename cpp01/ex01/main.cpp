/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 23:09:14 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 23:34:14 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	Zombie	*zombies;

	zombies = zombieHorde(10, "zumbilinha");
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Index" << i << ": ";
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}
