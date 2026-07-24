/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 12:05:28 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/22 15:02:59 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#define RED			"\033[31m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"
#define CYAN    	"\033[36m"
#define GREEN		"\033[32m"
#define RESET		"\033[0m"
#define BOLDCYAN	"\033[1m\033[36m"
#define BOLDMAGENTA "\033[1m\033[35m"

int main()
{
	std::cout << BOLDMAGENTA << "/* --------------- Subject tests --------------- */\n" << RESET;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

    std::cout << BOLDMAGENTA << "\n/* --------------- Testing deep copy --------------- */\n" << RESET;
    
    Character* original = new Character("Original");
    original->equip(src->createMateria("ice"));
    original->equip(src->createMateria("cure"));

    // Copy Constructor
    std::cout << BOLDCYAN << "/* >>> Creating 'copyCon' via the copy constructor <<< */\n" << RESET;
    Character* copyCon = new Character(*original);

    // Copy Assignment Operator
    std::cout << BOLDCYAN << "/* >>> Creating 'copyAssign' using copy assignment operator <<< */\n" << RESET;
    Character* copyAssign = new Character("Temp");
    *copyAssign = *original;

    // Alter `original` that they aren't dependent
    std::cout << BOLDCYAN << "/* >>> Altering 'original' (equipping slot 2) <<< */\n" << RESET;
    original->equip(src->createMateria("ice"));

    std::cout << BOLDCYAN << "\n/* >>> Testing clones' independence <<< */\n" << RESET;
    std::cout << "copyCon slot 2 (should do nothing): \n";
    copyCon->use(2, *bob); 
    std::cout << "copyAssign slot 2 (should do nothing): \n";
    copyAssign->use(2, *bob);
    std::cout << "original slot 2 (should work): \n";
    original->use(2, *bob);

    delete original;
    delete copyCon;
    delete copyAssign;

    std::cout << BOLDMAGENTA << "\n/* --------------- Testing inventory limits --------------- */\n" << RESET;

    ICharacter* testLimits = new Character("Boundary Tester");
    
    std::cout << BOLDCYAN << "/* >>> Testing invalid indices for use() <<< */\n" << RESET;
    testLimits->use(-1, *bob);
    testLimits->use(4, *bob);
    testLimits->use(42, *bob);

    std::cout << BOLDCYAN << "/* >>> Testing inventory overflow <<< */\n" << RESET;
    for (int i = 0; i < 5; i++) {
        tmp = src->createMateria("ice");
        testLimits->equip(tmp);
        if (i == 4) {
            std::cout << "Deleting the extra unequipped item to prevent leak\n";
            delete tmp;
        }
    }

    testLimits->use(0, *bob);
    
    delete  testLimits;

    std::cout << BOLDMAGENTA << "\n/* --------------- Testing the `unequip()` function --------------- */\n" << RESET;


    ICharacter* unequipTester = new Character("Unequip");
    AMateria* leftover = src->createMateria("cure");
    unequipTester->equip(leftover);
    unequipTester->unequip(0); 

    std::cout << "Slot 0 after unequip: (nothing)" << std::endl;
    unequipTester->use(0, *bob);

    delete leftover;
    delete unequipTester;

    delete bob;
    delete me;
    delete src;
    
    std::cout << BOLDMAGENTA << "\n/* --------------- Destruction --------------- */\n" << RESET;

	return 0;
}