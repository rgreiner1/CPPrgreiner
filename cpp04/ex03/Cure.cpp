/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:28:21 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 15:46:53 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"


Cure::Cure(){
    this->type = "cure";
    std::cout << "Constructor called" << std::endl;
}

Cure::~Cure(){
    std::cout << "Destructor called" << std::endl;
}

AMateria*  Cure::clone() const{
    
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}