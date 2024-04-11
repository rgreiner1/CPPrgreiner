/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:00:49 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/11 11:19:39 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure(){
//    std::cout << "Constructor called for a cure Materia" << std::endl;
    this->_Type = "cure";
}

Cure::~Cure(){
//    std::cout << "Destructor called and destroyed a cure Materia" << std::endl;
}

AMateria* Cure::clone() const{
    Cure *newcure = new Cure;
    return (newcure);
}

