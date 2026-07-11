/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:35:45 by sophie            #+#    #+#             */
/*   Updated: 2026/07/11 21:26:36 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <Brain.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	std::cout << BOLDMAGENTA << "Testing constructor, copy constructor\n" << RESET;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog dogA;
	Dog dogB(dogA);
	Cat catA;
	Cat catB;
	catA = catA;
	Animal* array[5];

	std::cout << BOLDMAGENTA << "Creating and deleting the array of Animal objects\n" << RESET;
	for (size_t i = 0; i < 5; ++i) {
		if (i < 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	
	array[1]->makeSound();
	array[4]->makeSound();

	for (size_t i = 0; i < 5; ++i)
		delete array[i];
	
	std::cout << BOLDMAGENTA << "Deep copies test\n" << RESET;
	catA.setIdea(0, "Bite my owner's ankles\n");
	catB =  catA;
	catA.setIdea(0, "Meow at the door\n");
	std::cout << catB.getIdea(0);
	std::cout << catA.getIdea(0);
	
	
	delete j;
	delete i;

	return (0);
}