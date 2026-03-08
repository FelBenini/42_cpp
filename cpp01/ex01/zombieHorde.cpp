/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 23:28:29 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 23:37:07 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string.h>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies;

	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i] = Zombie(name);
	return (zombies);
}
