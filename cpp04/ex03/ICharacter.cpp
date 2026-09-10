/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:38:10 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 18:39:25 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
}

ICharacter::ICharacter(ICharacter const &other)
{
	*this = other;
}

ICharacter const &ICharacter::operator=(ICharacter const &other)
{
	(void)other;
	return (*this);
}
