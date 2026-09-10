/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:32:17 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 18:34:16 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &other);
		~Cure(void);
		Cure const	&operator=(Cure const &other);

		virtual AMateria	*clone(void) const;
		void				use(ICharacter &target);
};

#endif
