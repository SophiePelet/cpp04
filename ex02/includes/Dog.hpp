/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:04:20 by sophie            #+#    #+#             */
/*   Updated: 2026/07/12 10:35:34 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal {
	public :

	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();
	
	void	makeSound() const;
	const std::string&	getIdea(size_t index) const;
	void				setIdea(size_t index, const std::string idea);

	private :

	Brain* _brain;
};

#endif