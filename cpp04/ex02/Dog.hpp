/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:45 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 11:39:32 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
   class Brain   *brain;
public:
    Dog();
    ~Dog();
    Dog(const Dog&);
    Dog &operator=(const Dog&src);
    virtual void    makeSound(void) const;
};

#endif
