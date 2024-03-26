/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:56:14 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/26 17:49:56 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    this->weapon = new Weapon;
    std::cout << "Constructor called" << std::endl;
    return ;
}

HumanB::~HumanB(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    HumanB::attack(){
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon weapon){
    this->weapon = &weapon;
}