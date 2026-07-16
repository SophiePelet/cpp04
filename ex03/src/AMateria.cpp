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

#include "Ice.hpp"
#include "Cure.hpp"

/* Constructor/destructor, copy constructor and copy assignment operator */

AMateria::AMateria() : _type("default") {}
AMateria::AMateria(std::string const &type) : _type(type) {}
AMateria::AMateria(const AMateria &other) {
	this->_type = other._type;
}
AMateria &AMateria::operator=(const AMateria &other) {
	(void)other;
	return (*this);
}
AMateria::~AMateria() {}

/* Member functions */

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
