/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:11:19 by sophie            #+#    #+#             */
/*   Updated: 2026/07/11 20:31:21 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

//constructor/destructor, copy constructor and copy assignment operator

Animal::Animal() : _type("Default") { std::cout << YELLOW << "Animal" << RESET << " constructor called\n"; }
Animal::Animal(const Animal &other) {
	std::cout << YELLOW << "Animal" << RESET << " copy constructor\n";
	this->_type = other._type; }
Animal &Animal::operator=(const Animal &other) {
	std::cout << YELLOW << "Animal" << RESET << " assignment operator called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
Animal::~Animal() { std::cout << YELLOW << "Animal" << RESET << " destructor called\n"; }

// member function

void	Animal::makeSound() const { std::cout << "*Random animal noises*\n"; }
const std::string	Animal::getType() const { return (this->_type); }