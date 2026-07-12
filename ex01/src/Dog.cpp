/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:12:35 by sophie            #+#    #+#             */
/*   Updated: 2026/07/12 20:54:47 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

// Constructor/destructor, copy constructor and copy assignment operator

Dog::Dog() : Animal() {
	std::cout << BLUE << "Dog" << RESET << " constructor called\n";
	this->_type = "Dog";
	_brain = new Brain();
}
Dog::Dog (const Dog &other) : Animal(other) {
	std::cout << BLUE << "Dog" << RESET << " copy constructor called\n";
	this->_brain = new Brain(*(other._brain));
}
Dog &Dog::operator=(const Dog &other) {
	std::cout << BLUE << "Dog" << RESET << " copy assignment operator called\n";
	if (this != &other) {
		this->_type = other._type;
		(*this->_brain) = *(other._brain);
	}
	return (*this);
}
Dog::~Dog() {
	std::cout << BLUE << "Dog" << RESET << " destructor called\n";
	delete _brain;
}

// member function

void	Dog::makeSound() const { std::cout << "Woof\n"; }
const std::string&	Dog::getIdea(size_t index) const { return (this->_brain->getIdea(index)); }
void				Dog::setIdea(size_t index, const std::string content) { this->_brain->setIdea(index, content); }