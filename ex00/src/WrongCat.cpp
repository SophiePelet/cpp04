/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 10:03:56 by sophie            #+#    #+#             */
/*   Updated: 2026/07/09 10:12:41 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor/destructor, copy constructor and copy assignment operator

WrongCat::WrongCat() : WrongAnimal() { 
	std::cout << "WrongCat constructor called\n";
	this->_type = "WrongCat";
}
WrongCat::WrongCat (const WrongCat &other) : WrongAnimal() {
	std::cout << "WrongCat copy constructor called\n";
	this->_type = other._type;
}
WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "WrongCat copy assignment operator called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
WrongCat::~WrongCat() { std::cout << "WrongCat destructor called\n"; }

// member function

void	WrongCat::makeSound() const { std::cout << "Meow\n"; }