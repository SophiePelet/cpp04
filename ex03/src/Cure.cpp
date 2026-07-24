/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:34:07 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/16 18:25:11 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

#include "Colors.hpp"

/* Constructor/destructor, copy constructor and copy assignment operator */

Cure::Cure() : AMateria("cure") {
	std::cout << GREEN << "Cure constructor called" << RESET << std::endl;
}
Cure::Cure(const Cure &other) : AMateria(other) {
	std::cout << BLUE << "Cure copy constructor called" << RESET << std::endl;
}
Cure &Cure::operator=(const Cure &other) {
	std::cout << YELLOW << "Cure copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}
Cure::~Cure() {
	std::cout << RED << "Cure destructor called" << RESET << std::endl;
}

/* Member functions */

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}