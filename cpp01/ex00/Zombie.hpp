/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 23:05:34 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 23:07:12 by fbenini-         ###   ########.fr       */
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
		~Zombie(void);
		void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
