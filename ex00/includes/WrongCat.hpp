/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 09:55:52 by sophie            #+#    #+#             */
/*   Updated: 2026/07/09 10:13:25 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public :

	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);
	~WrongCat();
	
	void	makeSound() const;
};

#endif