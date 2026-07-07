/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:04:17 by sophie            #+#    #+#             */
/*   Updated: 2026/07/07 23:21:29 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	public :
	
	Animal();
	Animal(const Animal &other);
	Animal	&operator=(const Animal &other);
	virtual	~Animal();

	virtual void			makeSound() const;
	const std::string		getType() const;

	protected :
	
	std::string	_type;
};

#endif