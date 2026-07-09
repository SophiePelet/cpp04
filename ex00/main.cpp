/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 23:02:39 by sophie            #+#    #+#             */
/*   Updated: 2026/07/09 10:36:28 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define YELLOW  "\033[33m"
#define MAGENTA	"\033[35m"
#define RED		"\033[31m"
#define RESET	"\033[0m"

int main()
{
	const Animal* 		meta = new Animal();
	const Animal* 		medor = new Dog();
	const Animal* 		moulinette = new Cat();
	const WrongAnimal*	wrong = new WrongCat();

	std::cout << "Medor is a: " << YELLOW << medor->getType()
		<< " " << RESET << std::endl;
	std::cout << "Moulinette is a: " << MAGENTA << moulinette->getType()
		<< " " << RESET << std::endl;
	std::cout << "Wrong is a: " << RED << wrong->getType() << " "
		<< RESET << std::endl;
	std::cout << YELLOW << "Medor "  << RESET << "goes: ";
	medor->makeSound();
	std::cout << MAGENTA << "Moulinette " << RESET << "goes: ";
	moulinette->makeSound();
	std::cout << "Random animal goes: ";
	meta->makeSound();
	std::cout << RED << "Wrong cat " << RESET << "goes: ";
	wrong->makeSound();

	delete(meta);
	delete(medor);
	delete(moulinette);
	delete(wrong);

	return (0);
}