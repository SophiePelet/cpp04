/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopelet <sopelet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 12:30:13 by sopelet           #+#    #+#             */
/*   Updated: 2026/07/16 18:18:21 by sopelet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource {

	private :

	AMateria*	_type[4];
	
	public :

	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	virtual	~MateriaSource();

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(const std::string &type);
	
};


#endif