/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:38 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 10:43:24 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Brain.hpp"

Cat::Cat(){
    this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Constructor called and created a Cat" << std::endl;
}

Cat::~Cat(void){
	delete  this->brain;
	std::cout << "Destructor called and destroyed a Cat" << std::endl;
}

Cat::Cat(const Cat& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Cat	&Cat::operator=(const Cat &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = src.type;
	return *this;
}