/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 12:05:48 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/16 16:22:39 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Colors.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/* Constructor/destructor, copy constructor and copy assignment operator */

AMateria::AMateria() : _type("default") {
	std::cout << GREEN << "AMateria constructor called" << RESET << std::endl;
}
AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << GREEN << "AMateria constructor called" << RESET << std::endl;
}
AMateria::AMateria(const AMateria &other) {
	this->_type = other._type;
	std::cout << BLUE << "AMateria copy constructor called" << RESET << std::endl;
}
AMateria &AMateria::operator=(const AMateria &other) {
	std::cout << YELLOW << "AMateria copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
AMateria::~AMateria() {
	std::cout << RED << "AMateria destructor called" << RESET << std::endl;
}

/* Member functions */

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
