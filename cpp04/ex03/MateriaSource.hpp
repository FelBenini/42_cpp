/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 18:37:54 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/08 18:41:42 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*inventory[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &other);
		MateriaSource const &operator=(MateriaSource const &other);
		~MateriaSource(void);

		virtual void		learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(std::string const &other);
		int					inLearnInventory(AMateria *materia);
};

#endif
