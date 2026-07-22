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

/* Constructor/destructor, copy constructor and copy assignment operator */

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure &other) : AMateria(other) {}
Cure &Cure::operator=(const Cure &other) {
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}
Cure::~Cure() {}

/* Member functions */

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}