/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:44:35 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/15 17:26:44 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

/* Constructor/destructor, copy constructor and copy assignment operator */
Character::Character() : _name("default") {
	for (size_t i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}
Character::Character(std::string const &name) : _name(name) {
	for (size_t i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}
Character::Character(const Character &other) : _name(other._name){
	for (size_t i = 0; i < 4; ++i) {
		if (other._inventory[i] != NULL)
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}
/*
	Delete the pointers of the other object to avoid danglinng pointers and
	memory leak
	Copy the content of the inventory to the other object
*/
Character &Character::operator=(const Character &other) {
	if (this != &other) {
		this->_name = other._name;

		for (size_t i = 0; i < 4; ++i) {
			if (this->_inventory[i] != NULL) {
				delete (this->_inventory[i]);
				this->_inventory[i] = NULL;
			}
		}

		for (size_t i = 0; i < 4; ++i)
			if (other._inventory[i] != NULL)
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
	}
	return (*this);
}
Character::~Character() {
	for (size_t i = 0; i < 4; ++i) {
        if (this->_inventory[i] != NULL) {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
		}
	}
}

/* Member functions */

std::string const	&Character::getName() const {
	return (_name);
}
void	Character::equip(AMateria* m) {
	if (m == NULL) {
		std::cout << "Cannot add an empty Materia to your inventory\n";
	}

	for (size_t i = 0; i < 4; ++i) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
}
/*
	To avoid dangling pointers and memory leaks, save the inventory pointers
	before calling unequip()
*/
void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "This spot doesn't exist in your inventory !\n";
		return ;
	}

	if (this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;

}
void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "This spot doesn't exist in your inventory !\n";
		return ;
	}

	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}