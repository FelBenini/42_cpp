/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:29:03 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/21 20:48:44 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;
	std::string	level;

	if (argc != 2)
		return (1);
	level = argv[1];
	harl.complain(level);
	return (0);
}
