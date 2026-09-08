/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:51:15 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/03 17:55:00 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <cstddef>
# include <string>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(std::string type);
		Brain(Brain const &other);
		Brain const &operator=(Brain const &other);
		~Brain(void);

		std::string	getIdea(size_t idx) const;
		void		setIdea(size_t idx, std::string idea);
};

#endif
