/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:35:45 by sophie            #+#    #+#             */
/*   Updated: 2026/07/16 19:10:34 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <Brain.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	std::cout << BOLDMAGENTA << "/* ------------ Testing constructor, copy constructor ------------ */\n" << RESET;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	// Triggers copy constructor
	Dog dogA;
	Dog dogB(dogA);
	
	std::cout << BOLDMAGENTA << "/* ------ Creating and deleting the array of Animal objects ------ */\n" << RESET;
	AAnimal* array[5];
	for (size_t i = 0; i < 5; ++i) {
		if (i < 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	
	std::cout << array[1]->getType() << std::endl;
	array[1]->makeSound();
	std::cout << array[4]->getType() << std::endl;
	array[4]->makeSound();

	for (size_t i = 0; i < 5; ++i)
		delete array[i];


	//Test AAnimal instantiation
	//const AAnimal* abstract = new AAnimal;
	
	std::cout << BOLDMAGENTA << "/* -------------- Testing makeSound() in Cat and Dog -------------- */\n" << RESET;
	i->makeSound();
	j->makeSound();
	
	std::cout << BOLDMAGENTA << "/* ------------------------ Deep copies test ---------------------- */\n" << RESET;
	Cat catA;
	Cat catB;
	catA.setIdea(0, "Bite my owner's ankles\n");
	catB =  catA; // Triggers assignment operator
	catA.setIdea(0, "Meow at the door\n");
	std::cout << catB.getIdea(0);
	std::cout << catA.getIdea(0);
	
	// Self assignment safety check
	catA = catA;
	
	delete j;
	delete i;

	return (0);
}