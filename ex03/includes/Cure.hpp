/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 11:56:01 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/15 15:46:25 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <AMateria.hpp>
#include <ICharacter.hpp>

class	Cure : public AMateria {
	public :

	Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	~Cure();

	void	use(ICharacter &target);
	virtual AMateria* clone() const;
};

#endif