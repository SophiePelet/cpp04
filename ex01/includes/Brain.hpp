/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 10:04:59 by sophie            #+#    #+#             */
/*   Updated: 2026/07/10 17:40:59 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

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