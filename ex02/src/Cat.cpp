/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:12:35 by sophie            #+#    #+#             */
/*   Updated: 2026/07/12 20:58:24 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

// Constructor/destructor, copy constructor and copy assignment operator

Cat::Cat() : AAnimal() { 
	std::cout << GREEN << "Cat" << RESET << " constructor called\n";
	this->_type = "Cat";
	_brain = new Brain();
}
Cat::Cat (const Cat &other) : AAnimal(other) {
	std::cout << GREEN << "Cat" << RESET << " copy constructor called\n";
	this->_brain = new Brain(*(other._brain));
}
Cat &Cat::operator=(const Cat &other) {
	std::cout << GREEN << "Cat" << RESET << " copy assignment operator called\n"; 
	if (this != &other) {
		this->_type = other._type;
		(*this->_brain) = *(other._brain);
	}
	return (*this);
}
Cat::~Cat() {
	std::cout << GREEN << "Cat" << RESET << " destructor called\n";
	delete _brain;
}

// member function

void				Cat::makeSound() const { std::cout << "Meow\n"; }
const std::string&	Cat::getIdea(size_t index) const { return (this->_brain->getIdea(index)); }
void				Cat::setIdea(size_t index, const std::string content) { this->_brain->setIdea(index, content); }