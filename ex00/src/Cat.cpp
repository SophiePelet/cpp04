/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:12:35 by sophie            #+#    #+#             */
/*   Updated: 2026/07/07 23:17:10 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor/destructor, copy constructor and copy assignment operator

Cat::Cat() : Animal() { 
	std::cout << "Cat constructor called\n";
	this->_type = "Cat";
}
Cat::Cat (const Cat &other) : Animal() {
	std::cout << "Cat copy constructor called\n";
	this->_type = other._type;
}
Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
Cat::~Cat() { std::cout << "Cat destructor called\n"; }

// member function

void	Cat::makeSound() const { std::cout << "Meow\n"; }