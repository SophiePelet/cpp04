/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 12:43:32 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/16 18:34:04 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

/* Constructor/destructor, copy constructor and copy assignment operator */

MateriaSource::MateriaSource() {
	for (size_t i = 0; i < 4; ++i)
		_type[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &other) {
	for (size_t i = 0; i < 4; ++i) {
		if (other._type[i] != NULL)
			this->_type[i] = other._type[i]->clone();
		else
			this->_type[i] = NULL;
	}
}
MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other) {
		
		for (size_t i = 0; i < 4; ++i) {
			if (this->_type[i] != NULL) {
				delete this->_type[i];
				this->_type[i] = NULL;
			}
		}

		for (size_t i = 0; i < 4; ++i) {
			if (other._type[i] != NULL)
				this->_type[i] = other._type[i]->clone();
			else
				this->_type[i] = NULL;
		}
	}
	return (*this);
}
MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < 4; ++i) {
		if (this->_type[i] != NULL)
			delete this->_type[i];
	}
}

/* Member functions */

void    MateriaSource::learnMateria(AMateria* knowledge) {
	if (knowledge == NULL)
		return ;
	
	for (size_t i = 0; i < 4; ++i) {
		if (this->_type[i] == NULL) {
			this->_type[i] = knowledge;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (size_t i = 0; i < 4; ++i) {
		if (this->_type[i] && this->_type[i]->getType() == type) {
			return (this->_type[i]); 
		}
	}
	return (NULL);
}