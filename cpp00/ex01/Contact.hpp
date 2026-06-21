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
		std::string _phonenumber;
		std::string	_nickname;
		std::string	_secret;

	public:
		Contact(void);
		void		set_contact(int index, std::string firstname, std::string surname,
									std::string phonenumber, std::string nickname, std::string secret);
		int			get_index(void);
		std::string	get_firstname(void);
		std::string	get_surname(void);
		std::string	get_phonenumber(void);
		std::string	get_nickname(void);
		std::string get_secret(void);
};

#endif
