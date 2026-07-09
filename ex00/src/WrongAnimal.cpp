/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 10:02:20 by sophie            #+#    #+#             */
/*   Updated: 2026/07/09 10:03:09 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//constructor/destructor, copy constructor and copy assignment operator

WrongAnimal::WrongAnimal() : _type("Default") { std::cout << "WrongAnimal constructor called\n"; }
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "WrongAnimal copy constructor\n";
	this->_type = other._type; }
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "WrongAnimal copy assignment operator called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called\n"; }

// member function

void				WrongAnimal::makeSound() const { std::cout << "*Random WrongAnimal noises*\n"; }
const std::string	WrongAnimal::getType() const { return (this->_type); }