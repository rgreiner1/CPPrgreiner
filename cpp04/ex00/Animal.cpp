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

#include"Animal.hpp"

Animal::Animal(){
	std::cout << "Constructor called and created an Animal" << std::endl;
}

Animal::Animal(std::string name){
	std::cout << "Constructor called and created an Animal" << std::endl;
	type = name;
}

Animal::~Animal(void){
	std::cout << "Destructor called and destroyed an Animal" << std::endl;
}

Animal::Animal(Animal& src){
	std::cout << "Copy constructor called" << std::endl;
	this->type = src.type;
}

Animal	&Animal::operator=(const Animal &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = src.getType();
	return *this;
}

std::string Animal::getType(void) const{
	return(this->type);
}

void    Animal::makeSound(void) const{
    std::cout << "This animal can't do any noise" << std::endl;
}