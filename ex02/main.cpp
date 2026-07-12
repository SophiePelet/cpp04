/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:35:45 by sophie            #+#    #+#             */
/*   Updated: 2026/07/12 10:46:11 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <Brain.hpp>
#include <Cat.hpp>
#include <Dog.hpp>

int main()
{
	std::cout << BOLDMAGENTA << "Testing constructor, copy constructor\n" << RESET;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Dog dogA;
	Dog dogB(dogA);
	Cat catA;
	Cat catB;
	catA = catA;

	// Testing AAnimal instantiation
	// AAnimal	testing;
	
	std::cout << BOLDMAGENTA << "Testing makeSound() in Cat and Dog\n" << RESET;
	i->makeSound();
	j->makeSound();
	
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