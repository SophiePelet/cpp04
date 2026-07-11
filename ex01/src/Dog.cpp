/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:12:35 by sophie            #+#    #+#             */
/*   Updated: 2026/07/11 16:56:50 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

// Constructor/destructor, copy constructor and copy assignment operator

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called\n";
	this->_type = "Dog";
	_brain = new Brain();
}
Dog::Dog (const Dog &other) : Animal() {
	std::cout << "Dog copy constructor called\n";
	this->_type = other._type;
}
Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
Dog::~Dog() {
	std::cout << "Dog destructor called\n";
	delete _brain;
}

// member function

void	Dog::makeSound() const { std::cout << "Woof\n"; }