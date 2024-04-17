/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:18:08 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/17 18:18:19 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Amateria.hpp"
#include"ICharacter.hpp"

AMateria::AMateria(){
	this->_Type = "empty";
//	std::cout << "Constructor called" << std::endl;   
}

AMateria::AMateria(std::string const &type){
	this->_Type = type;
//	std::cout << "Constructor called" << std::endl;
}

AMateria::~AMateria(){
//	std::cout << "Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& src){
	*this = src;
}

AMateria &AMateria::operator=(const AMateria&src){
	this->_Type = src.getType();
	return (*this);
}

std::string const & AMateria::getType() const{
	return(this->_Type);
}

void AMateria::use(ICharacter& target){
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}