/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:16:57 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/11 11:28:54 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Amateria.hpp"
#include"Ice.hpp"
#include"Cure.hpp"
#include"MateriaSource.hpp"
#include"Character.hpp"


/*int main(){
    Ice test1;
    AMateria * test2 = test1.clone();
    std::cout << test2->getType() << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(test2);
    src->createMateria("cc");
    return (0);
}*/

int main(){
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->unequip(1);
    me->use(1, *bob);
    me->use(3, *bob);
}