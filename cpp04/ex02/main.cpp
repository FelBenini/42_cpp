/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:13:02 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/03 18:31:13 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main(void)
{
	AAnimal	*animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	std::cout << "============================" << "DOG" << "============================" << std::endl;
	Dog	dog;
	Dog	copy = dog;
	std::cout << "Hi, I am " << dog.getType() << std::endl;
	dog.getBrain()->setIdea(0, "FOOD");
	std::cout << "I am thinking of " << dog.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy is thinking of " << copy.getBrain()->getIdea(0) << std::endl;
	std::cout << "===========================================================" << std::endl;

	std::cout << "============================" << "CAT" << "============================" << std::endl;
	Cat	cat;
	Cat	copy_cat = cat;
	std::cout << "Hi, I am " << cat.getType() << std::endl;
	cat.getBrain()->setIdea(0, "WHISKAS");
	std::cout << "I am thinking of " << cat.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copy is thinking of " << copy_cat.getBrain()->getIdea(0) << std::endl;
	std::cout << "===========================================================" << std::endl;

	for (int i = 0; i < 5; i++)
		delete animals[i];
	for (int i = 5; i < 10; i++)
		delete animals[i];
	return (0);
}
