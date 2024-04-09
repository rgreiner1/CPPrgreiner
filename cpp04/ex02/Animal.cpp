/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:33 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 11:44:51 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"

AAnimal::AAnimal(){
	std::cout << "Constructor called and created an Animal" << std::endl;
}

AAnimal::~AAnimal(void){
	std::cout << "Destructor called and destroyed an Animal" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

AAnimal	&AAnimal::operator=(const AAnimal &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = src.getType();
	return *this;
}

std::string AAnimal::getType(void) const{
	return(this->type);
}
