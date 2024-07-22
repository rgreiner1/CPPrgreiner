/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:41 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:21:50 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    class Brain   *brain;
public:
    Cat();
    ~Cat();
    Cat(const Cat& src);
    Cat &operator=(const Cat&src);
    void    makeSound(void) const;
    Brain *getBrain(void) const;
};

#endif