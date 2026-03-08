/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:33:52 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 21:38:34 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	private:
		Contact	_contacts[8];
		int		_index;
		int		_qty;

	public:
		Phonebook(void);

		void	display_commands(void);
		void	insert_contact(void);
		void	search_information(void);
};

#endif
