/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:43 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:23:23 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Constructor called and created a Dog" << std::endl;
}

Dog::~Dog(void){
	delete  this->brain;
	std::cout << "Destructor called and destroyed a Dog" << std::endl;
}

Dog::Dog(const Dog& src) :AAnimal(src.getType()){
	std::cout << "Copy constructor called DOG" << std::endl;
	*this = src;
}

Dog	&Dog::operator=(const Dog &src){
	std::cout << "Copy assignment operator called DOG" << std::endl;
	this->type = src.getType();
	delete this->brain;
	this->brain = new Brain(*src.brain);
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}
