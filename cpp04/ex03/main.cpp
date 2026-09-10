/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 15:49:55 by fbenini-          #+#    #+#             */
/*   Updated: 2026/09/09 19:36:59 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

static void equip(Character &character, IMateriaSource &source, const std::string &type)
{
	AMateria *tmp = source.createMateria(type);
	if (tmp)
	    character.equip(tmp);
}

static void useAll(Character &character, ICharacter &target)
{
	for (int i = 0; i < 4; i++)
		character.use(i, target);
}

int main()
{
	std::cout << "\n========== BASIC ==========" << std::endl;

	MateriaSource src;
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());

	Character me("me");
	Character bob("bob");

	equip(me, src, "ice");
	equip(me, src, "cure");

	me.use(0, bob);
	me.use(1, bob);

	std::cout << "\n========== 4 SLOTS ==========" << std::endl;

	Character alice("alice");

	equip(alice, src, "ice");
	equip(alice, src, "cure");
	equip(alice, src, "ice");
	equip(alice, src, "cure");

	useAll(alice, bob);


	std::cout << "\n========== FULL INVENTORY ==========" << std::endl;

	AMateria *extra = src.createMateria("ice");

	if (extra)
	{
	    alice.equip(extra);
	    delete extra;
	}

	useAll(alice, bob);


	std::cout << "\n========== UNEQUIP ==========" << std::endl;

	Character unequipTest("unequip");

	AMateria *unequipped = src.createMateria("ice");

	unequipTest.equip(unequipped);
	unequipTest.unequip(0);

	delete unequipped;

	std::cout << "\n========== INVALID INDEXES ==========" << std::endl;

	alice.use(-1, bob);
	alice.use(4, bob);
	alice.use(100, bob);

	alice.unequip(-1);
	alice.unequip(4);
	alice.unequip(100);

	std::cout << "Invalid indexes did not crash." << std::endl;

	std::cout << "\n========== EMPTY CHARACTER ==========" << std::endl;

	Character empty("empty");

	useAll(empty, bob);

	std::cout << "\n========== UNKNOWN MATERIA ==========" << std::endl;

	AMateria *unknown = src.createMateria("fire");

	if (!unknown)
	    std::cout << "Unknown materia -> NULL" << std::endl;
	else
    	delete unknown;


	std::cout << "\n========== EMPTY SOURCE ==========" << std::endl;

	MateriaSource emptySource;

	AMateria *nothing = emptySource.createMateria("ice");

	if (!nothing)
    	std::cout << "Empty source -> NULL" << std::endl;
	else
    	delete nothing;


	std::cout << "\n========== CHARACTER COPY ==========" << std::endl;

	Character original("original");

	equip(original, src, "ice");
	equip(original, src, "cure");

	Character copy(original);

	std::cout << "Original:" << std::endl;
	original.use(0, bob);
	original.use(1, bob);

	std::cout << "Copy:" << std::endl;
	copy.use(0, bob);
	copy.use(1, bob);

	std::cout << "\n========== CHARACTER ASSIGNMENT ==========" << std::endl;

	Character assigned("assigned");

	equip(assigned, src, "ice");

	assigned = original;

	assigned.use(0, bob);
	assigned.use(1, bob);

	std::cout << "\n========== MATERIA SOURCE COPY ==========" << std::endl;

	MateriaSource srcCopy(src);

	Character fromCopy("fromCopy");

	equip(fromCopy, srcCopy, "ice");
	equip(fromCopy, srcCopy, "cure");

	fromCopy.use(0, bob);
	fromCopy.use(1, bob);

	std::cout << "\n========== MATERIA SOURCE ASSIGNMENT ==========" << std::endl;

	MateriaSource srcAssigned;

	srcAssigned = src;

	Character fromAssigned("fromAssigned");

	equip(fromAssigned, srcAssigned, "ice");
	equip(fromAssigned, srcAssigned, "cure");

	fromAssigned.use(0, bob);
	fromAssigned.use(1, bob);

	std::cout << "\n========== NULL EQUIP ==========" << std::endl;

	Character nullCharacter("null");

	nullCharacter.equip(NULL);

	useAll(nullCharacter, bob);

	std::cout << "NULL equip did not crash." << std::endl;

	std::cout << "\n========== DONE ==========" << std::endl;

	return 0;
}
