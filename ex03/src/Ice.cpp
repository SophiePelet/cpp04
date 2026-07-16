/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:33:47 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/16 16:23:03 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructor/destructor, copy constructor and copy assignment operator */

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice &other) : AMateria(other) {}
Ice &Ice::operator=(const Ice &other) {
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}
Ice::~Ice() {}

/* Member functions */

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}