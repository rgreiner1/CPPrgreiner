/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:45 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:21:53 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    class Brain   *brain;
public:
    Dog();
    ~Dog();
    Dog(const Dog& src);
    Dog &operator=(const Dog&src);
    void    makeSound(void) const;
    Brain *getBrain(void) const;

};

#endif
