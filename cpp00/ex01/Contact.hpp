/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:35:44 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 21:46:09 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	private:
		int			_index;
		std::string	_firstname;
		std::string	_surname;
		std::string	_nickname;

	public:
		Contact(void);
		void		set_contact(int index, std::string firstname, std::string surname,
									std::string _nickname);
		int			get_index(void);
		std::string	get_firstname(void);
		std::string	get_surname(void);
		std::string	get_nickname(void);
};

#endif
