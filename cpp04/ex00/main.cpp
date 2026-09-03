/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:13:02 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/03 17:45:18 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include <iostream>

void	testAnimal(const WrongAnimal* animal)
{
	std::cout << "I am an animal of type " << animal->getType() << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;
}

void	testAnimal(const Animal* animal)
{
	std::cout << "I am an animal of type " << animal->getType() << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;
}

int	main(void)
{
	Animal *animal = new Animal();
	testAnimal(animal);

	Animal *cat = new Cat();
	testAnimal(cat);

	Animal *dog = new Dog();
	testAnimal(dog);

	WrongAnimal *wrongAnimal = new WrongAnimal();
	testAnimal(wrongAnimal);

	WrongCat *wrongCat = new WrongCat();
	testAnimal(wrongCat);

	WrongDog *wrongDog = new WrongDog();
	testAnimal(wrongDog);
	return (0);
}
