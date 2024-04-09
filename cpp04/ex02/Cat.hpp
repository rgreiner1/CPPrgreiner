/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:41 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 11:39:00 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    class Brain   *brain;
public:
    Cat();
    ~Cat();
    Cat(const Cat&);
    Cat &operator=(const Cat&src);
    virtual void    makeSound(void) const;
};

#endif