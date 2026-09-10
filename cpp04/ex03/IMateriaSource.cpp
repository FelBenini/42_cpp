/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:47:18 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 18:47:25 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
}

IMateriaSource::IMateriaSource(IMateriaSource const &copy)
{
	*this = copy;
}

IMateriaSource const	&IMateriaSource::operator=(IMateriaSource const &copy)
{
	(void)copy;
	return (*this);
}
