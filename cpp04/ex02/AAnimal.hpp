/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
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

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal();
		AAnimal	&operator=(const AAnimal &other);
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		virtual void	makeSound() const = 0;
		const std::string	getType() const;
};

#endif
