/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:33:13 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/11 11:20:08 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
//	std::cout << "Constructor for a MateriaSource called" << std::endl;
}

MateriaSource::~MateriaSource(){
//	std::cout << "Destuctor for a MateriaSource called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* src){
	if (!materia[0])
		materia[0] = src->clone();
	else if (!materia[1])
		materia[1] = src->clone();
	else if (!materia[2])
		materia[2] = src->clone();
	else if (!materia[3])
		materia[3] = src->clone();
}

AMateria *MateriaSource::createMateria(std::string const & type){
	if(materia[0] && materia[0]->getType() == type)
		return (materia[0]->clone());
	else if(materia[1] && materia[1]->getType() == type)
		return (materia[1]->clone());
	else if(materia[2] && materia[2]->getType() == type)
		return (materia[2]->clone());
	else if(materia[3] && materia[3]->getType() == type)
		return (materia[3]->clone());
	else
	{
		std::cout << "Create Materia didn't find any materia with this Materia type" << std::endl;
			return (0);
	}
}