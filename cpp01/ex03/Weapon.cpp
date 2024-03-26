/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:18:22 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/26 17:45:03 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(){
	std::cout << "Constructor called" << std::endl;
	return ;
}

Weapon::Weapon (std::string newtype){
	this->type = newtype;
	std::cout << "Constructor called" << std::endl;
	return ;
}

Weapon::~Weapon(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

const	std::string&  Weapon::getType(){
	return (this->type);
}

void	Weapon::setType(std::string newtype){
	this->type = newtype;
}
