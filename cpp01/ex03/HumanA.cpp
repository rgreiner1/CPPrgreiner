/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:26:27 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/26 12:27:33 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {

    std::cout << "Constructor called" << std::endl;
    return ;
}

HumanA::~HumanA(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    HumanA::attack(){
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}