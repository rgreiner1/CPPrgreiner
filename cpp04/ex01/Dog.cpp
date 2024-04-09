/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:43 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 10:43:28 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"
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

Dog::Dog(const Dog& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Dog	&Dog::operator=(const Dog &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = src.type;
	return *this;
}