/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:36 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 11:04:01 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string name);
    virtual ~Animal();
    Animal(Animal &src);
    Animal &operator=(const Animal&src);
    std::string getType(void) const;
    virtual void    makeSound(void) const;
};

#endif