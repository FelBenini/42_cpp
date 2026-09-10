/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 16:09:44 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 18:22:09 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Character: public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &other);
		Character const	&operator=(Character const &other);
		~Character(void);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		bool	inInventory(AMateria *m);
};

#endif
