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

Animal::~Animal(void){
	std::cout << "Destructor called and destroyed an Animal" << std::endl;
}

Animal::Animal(const Animal& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
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
    if (this->type == "Dog")
        std::cout << "Ouaf" << std::endl;
    else if (this->type == "Cat")
        std::cout << "Meow" << std::endl;
    else
        std::cout << "This animal can't do any noise" << std::endl;
    
}