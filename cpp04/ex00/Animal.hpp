/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:31:38 by fbenini-          #+#    #+#             */
/*   Updated: 2026/08/24 17:15:02 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		Animal	&operator=(const Animal &other);
		Animal(const Animal &other);
		virtual ~Animal();
		virtual void	makeSound() const;
		const std::string	getType() const;
};

#endif
