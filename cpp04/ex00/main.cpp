/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:48 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:42:00 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"WrongAnimal.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"
#include"Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* l = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    l->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    delete l;
    return 0;
}