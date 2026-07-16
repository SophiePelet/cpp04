/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:23:07 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/15 15:46:17 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define	ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice : public AMateria {
	public :

	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	virtual ~Ice();

	void	use(ICharacter &target);
	virtual AMateria* clone() const;
};

#endif