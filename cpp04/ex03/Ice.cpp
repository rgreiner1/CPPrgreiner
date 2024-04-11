/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:16:52 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/11 11:19:45 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice(){
  //  std::cout << "Constructor called for a ice Materia" << std::endl;
    this->_Type = "ice";
}

Ice::~Ice(){
 //   std::cout << "Destructor called and destroyed a ice Materia" << std::endl;
}

AMateria* Ice::clone() const{
    Ice *newice = new Ice;
    return (newice);
}
