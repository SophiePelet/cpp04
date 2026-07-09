/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sophie <sophie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 09:56:42 by sophie            #+#    #+#             */
/*   Updated: 2026/07/09 10:13:56 by sophie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal {
    public:

    WrongAnimal();
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    ~WrongAnimal();

    void                makeSound() const;
    const std::string   getType() const;
    
    protected:

    std::string _type;
};

#endif