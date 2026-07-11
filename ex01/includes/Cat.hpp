/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:04:40 by sophie            #+#    #+#             */
/*   Updated: 2026/07/11 16:56:10 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	public :

	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	
	void	makeSound() const;

	private :

	Brain* _brain;
};

#endif