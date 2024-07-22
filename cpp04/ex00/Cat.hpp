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
#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
    Cat();
    ~Cat();
    Cat(const Cat& src);
    Cat &operator=(const Cat&src);
    void    makeSound(void) const;
};

#endif