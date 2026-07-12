/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:11:19 by sophie            #+#    #+#             */
/*   Updated: 2026/07/11 20:31:21 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

//constructor/destructor, copy constructor and copy assignment operator

AAnimal::AAnimal() : _type("Default") { std::cout << YELLOW << "AAnimal" << RESET << " constructor called\n"; }
AAnimal::AAnimal(const AAnimal &other) {
	std::cout << YELLOW << "AAnimal" << RESET << " copy constructor\n";
	this->_type = other._type; }
AAnimal &AAnimal::operator=(const AAnimal &other) {
	std::cout << YELLOW << "AAnimal" << RESET << " assignment operator called\n";
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
AAnimal::~AAnimal() { std::cout << YELLOW << "AAnimal" << RESET << " destructor called\n"; }

// member function

const std::string	AAnimal::getType() const { return (this->_type); }