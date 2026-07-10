/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:11:19 by sophie            #+#    #+#             */
/*   Updated: 2026/07/07 23:10:11 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//constructor/destructor, copy constructor and copy assignment operator

Animal::Animal() : _type("Default") { std::cout << "Animal constructor called\n"; }
Animal::Animal(const Animal &other) {
	std::cout << "Animal copy constructor\n";
	this->_type = other._type; }
Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal copy assignment operator called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
Animal::~Animal() { std::cout << "Animal destructor called\n"; }

// member function

void	Animal::makeSound() const { std::cout << "*Random animal noises*\n"; }
const std::string	Animal::getType() const { return (this->_type); }