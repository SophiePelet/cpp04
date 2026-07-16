/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:03:31 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/16 18:18:43 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;
#include <string>

class	AMateria {
	protected :

	std::string _type;
	
	public :

	AMateria();
	AMateria(const AMateria &other);
	AMateria(std::string const &type);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();

	std::string const &getType() const;
	
	virtual	AMateria* clone() const = 0;
	virtual	void	use(ICharacter &target);
};

#endif