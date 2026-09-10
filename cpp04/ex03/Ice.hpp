/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:51:33 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 18:08:23 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &other);
		Ice const &operator=(Ice const &other);
		~Ice(void);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
