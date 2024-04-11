/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:17:16 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/11 11:28:07 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character(){
    
}

Character::~Character(){
    
}

Character::Character(std::string name){
    this->_Name = name;
}

std::string const & Character::getName() const{
    return (this->_Name);
}

void    Character::equip(AMateria* m){
    if (!materia[0])
		materia[0] = m->clone();
	else if (!materia[1])
		materia[1] = m->clone();
	else if (!materia[2])
		materia[2] = m->clone();
	else if (!materia[3])
		materia[3] = m->clone();
}

void    Character::unequip(int idx){
    (void)idx;
}

void    Character::use(int idx, ICharacter& target){
    if (idx > 3)
    {
        std::cout << this->getName() << " only have a 4 inventory slots" << std::endl;
        return ;
    }
    if (!materia[idx])
    {
        std::cout << this->getName() << " don't have any materia equiped in slot " << idx << std::endl;
        return ;
    }
    materia[idx]->use(target);
}