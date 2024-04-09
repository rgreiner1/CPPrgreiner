/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ameteria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:52:12 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 16:09:51 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Amateria.hpp"


AMateria::AMateria(){
    std::cout << "constructor called and created a Materia " << std::endl;
}

AMateria::AMateria(std::string const & type){
    this->type = type;
    std::cout << "constructor called and created a Materia " << this->getType() << std::endl;
}

AMateria::~AMateria(){
    std::cout << "Destructor called and destoyed a Materia " << this->getType() << std::endl;
}
const std::string &AMateria::getType() const{
    return (this->type);
}

void AMateria::use(ICharacter& target){
    
}