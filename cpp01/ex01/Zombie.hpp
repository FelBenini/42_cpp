/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 23:05:34 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 23:37:11 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie(void);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
