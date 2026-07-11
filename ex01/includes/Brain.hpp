/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 10:04:59 by sophie            #+#    #+#             */
/*   Updated: 2026/07/11 21:27:55 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define RED			"\033[31m"
#define YELLOW		"\033[33m"
#define BLUE		"\033[34m"
#define GREEN		"\033[32m"
#define RESET		"\033[0m"
#define BOLDMAGENTA "\033[1m\033[35m"

class	Brain {
	public :

	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();

	const std::string&	getIdea(size_t index) const;
	void				setIdea(size_t index, const std::string idea);
	
	private :

	std::string	_ideas[100];
};

#endif