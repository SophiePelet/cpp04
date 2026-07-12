/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:04:40 by sophie            #+#    #+#             */
/*   Updated: 2026/07/12 10:35:25 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal {
	public :

	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	
	void	makeSound() const;
	const std::string&	getIdea(size_t index) const;
	void				setIdea(size_t index, const std::string idea);

	private :

	Brain* _brain;
};

#endif