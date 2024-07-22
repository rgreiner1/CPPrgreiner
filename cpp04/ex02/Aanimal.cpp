/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:33 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:25:29 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "Constructor called and created an AAnimal" << std::endl;
}

AAnimal::AAnimal(std::string name){
	std::cout << "Constructor called and created an AAnimal" << std::endl;
	type = name;
}

AAnimal::~AAnimal(void){
	std::cout << "Destructor called and destroyed an AAnimal" << std::endl;
}

AAnimal::AAnimal(AAnimal& src){
	std::cout << "Copy constructor called" << std::endl;
	this->type = src.type;
}

AAnimal	&AAnimal::operator=(const AAnimal &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = src.getType();
	return *this;
}

std::string AAnimal::getType(void) const{
	return(this->type);
}

void    AAnimal::makeSound(void) const{
    std::cout << "This Aanimal can't do any noise" << std::endl;
}