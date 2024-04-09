/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:35:42 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 15:36:29 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character(){
    std::cout << "Constructor Called" << std::endl; 
}

Character::~Character(){
    std::cout << "Destructor Called" << std::endl; 
}

Character::Character(std::string name){
    std::cout << "Constructor Called" << std::endl;
    this->Name = name;
}

std::string const & Character::getName() const{
    return(this->Name);
}

void    Character::equip(AMateria *m){
    
}

void    Character::unequip(int  idx){
    
}

void    Character::use(int idx, ICharacter& target){
    
}