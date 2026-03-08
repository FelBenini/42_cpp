/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 23:41:32 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/07 23:44:33 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPtr = &str;
	std::string	&stringRef = str;

	std::cout << "The memory address of the string variable: "<< &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPtr << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringRef << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: "<< *stringPtr << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringRef << std::endl;
}
