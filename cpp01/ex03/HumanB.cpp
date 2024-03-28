/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:56:14 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/28 10:51:36 by rgreiner         ###   ########.fr       */
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
    if (this->weapon->getType().empty())
        std::cout << this->name << " can't attack because they don't have a weapon" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}