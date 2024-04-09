/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:16:38 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 15:53:36 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Amateria.hpp"

MateriaSource::MateriaSource(){
    std::cout << "Constructor Called" << std::endl; 
}

MateriaSource::~MateriaSource(){
    std::cout << "Destructor Called" << std::endl; 
}

void    MateriaSource::learnMateria(AMateria*){
    
}

AMateria* MateriaSource::createMateria(std::string const & type){
    
}