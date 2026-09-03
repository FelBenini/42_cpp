/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:13:48 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/03 17:14:24 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		virtual ~Dog();
		void	makeSound() const;
};

#endif
