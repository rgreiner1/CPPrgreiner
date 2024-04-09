/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:27:53 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 15:51:07 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice(){
    this->type = "ice";
    std::cout << "Constructor called" << std::endl;
}

Ice::~Ice(){
    std::cout << "Destructor called" << std::endl;
}

AMateria*  Ice::clone() const{
   Ice *newice;
   return (newice);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

