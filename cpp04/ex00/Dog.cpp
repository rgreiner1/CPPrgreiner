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
	std::cout << "Constructor called and created a Dog" << std::endl;
}

Dog::~Dog(void){
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