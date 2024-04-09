/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:40:04 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:43:13 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "Cat";
	std::cout << "Constructor called and created a WrongCat" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "Destructor called and destroyed a WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

WrongCat	&WrongCat::operator=(const WrongCat &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = src.type;
	return *this;
}