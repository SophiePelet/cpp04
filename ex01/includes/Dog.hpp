/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:04:20 by sophie            #+#    #+#             */
/*   Updated: 2026/07/11 16:56:19 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	public :

	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();
	
	void	makeSound() const;

	private :

	Brain* _brain;
};

#endif