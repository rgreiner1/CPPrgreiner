/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:17:16 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/17 18:23:35 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character(){
    materia[0] = NULL;
    materia[1] = NULL;
    materia[2] = NULL;
    materia[3] = NULL;
}

Character::~Character(){
    if (materia[3])
		delete materia[3];
	if (materia[2])
		delete materia[2];
	if (materia[1])
		delete materia[1];
	if (materia[0])
		delete materia[0];
}

Character::Character(std::string name){
    materia[0] = NULL;
    materia[1] = NULL;
    materia[2] = NULL;
    materia[3] = NULL;
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
    delete m;
}

void    Character::unequip(int idx){
    if (idx > 3)
    {
        std::cout << this->getName() << " only have a 4 inventory slots" << std::endl;
        return ;
    }
    materia[idx] = NULL;
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

AMateria* Character::getMateria(int i){
    return (this->materia[i]);
}