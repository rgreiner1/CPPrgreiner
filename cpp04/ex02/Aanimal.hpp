/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:36 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 11:04:01 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(std::string name);
    virtual ~AAnimal() = 0;
    AAnimal(AAnimal &src);
    AAnimal &operator=(const AAnimal&src);
    std::string getType(void) const;
    virtual void    makeSound(void) const = 0;
};

#endif