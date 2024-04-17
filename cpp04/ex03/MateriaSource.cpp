/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:33:13 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/17 18:23:07 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
//	std::cout << "Constructor for a MateriaSource called" << std::endl;
	materia[0] = NULL;
    materia[1] = NULL;
    materia[2] = NULL;
    materia[3] = NULL;
}

MateriaSource::~MateriaSource(){
//	std::cout << "Destuctor for a MateriaSource called" << std::endl;
	if (materia[3])
		delete materia[3];
	if (materia[2])
		delete materia[2];
	if (materia[1])
		delete materia[1];
	if (materia[0])
		delete materia[0];
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
	delete src;
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