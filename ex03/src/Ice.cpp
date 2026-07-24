/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:33:47 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/22 15:00:34 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>

#include "Colors.hpp"

/* Constructor/destructor, copy constructor and copy assignment operator */

Ice::Ice() : AMateria("ice") {
	std::cout << GREEN << "Ice constructor called" << RESET << std::endl;
}
Ice::Ice(const Ice &other) : AMateria(other) {
	std::cout << BLUE << "Ice copy constructor called" << RESET << std::endl;
}
Ice &Ice::operator=(const Ice &other) {
	std::cout << YELLOW << "Ice copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}
Ice::~Ice() {
	std::cout << RED << "Ice destructor called" << RESET << std::endl;
}

/* Member functions */

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}