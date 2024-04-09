/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:34:44 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:44:02 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Constructor called and created an Wrong Animal" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Destructor called and destroyed an Wrong Animal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = src.getType();
	return *this;
}

std::string WrongAnimal::getType(void) const{
	return("Wrong " + this->type);
}

void    WrongAnimal::makeSound(void) const{
    if (this->type == "Dog")
        std::cout << "Wrong Ouaf" << std::endl;
    else if (this->type == "Cat")
        std::cout << "Wrong Meow" << std::endl;
    else
        std::cout << "This Wrong animal can't do any noise" << std::endl;
    
}