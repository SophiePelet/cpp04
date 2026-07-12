/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:04:17 by sophie            #+#    #+#             */
/*   Updated: 2026/07/12 10:33:23 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal {
	public :
	
	AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal	&operator=(const AAnimal &other);
	virtual	~AAnimal();

	virtual void			makeSound() const = 0;
	const std::string		getType() const;

	protected :
	
	std::string	_type;
};

#endif