/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:08:20 by sophie            #+#    #+#             */
/*   Updated: 2026/07/11 16:48:06 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor/destructor, copy constructor and copy assignment operator

Brain::Brain() { std::cout << "Brain constructor called\n"; }
Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called\n";
	for (size_t i = 0; i < 100; ++i)
		this->_ideas[i] = other._ideas[i];
}
Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator called\n";
	if (this != &other) {
		for (size_t i = 0; i < 100; ++i) {
				this->_ideas[i] = other._ideas[i];
		}
	}
	return (*this);
}
Brain::~Brain() { std::cout << "Brain destrcutor called\n"; }


// Member functions

const std::string&	Brain::getIdea(size_t index) const {
	static const std::string	err_message = "Invalid index\n";

	if (index < 100)
		return (_ideas[index]);

	return (err_message);
}
void	Brain::setIdea(size_t index, const std::string content) {
	if (index < 100) {
		_ideas[index] = content;
		return ;
	}

	std::cout << "Invalid index\n";

	return ;
}