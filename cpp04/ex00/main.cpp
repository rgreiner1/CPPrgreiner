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
    const Animal* goodDog = new Dog();
    const Animal* goodCat = new Cat();
    const WrongAnimal* badAnimal = new WrongCat();
    const WrongCat* badCat = new WrongCat();
    std::cout << goodDog->getType() << std::endl;
    std::cout << goodCat->getType() << std::endl;
    std::cout << badAnimal->getType() << std::endl;
    std::cout << std::endl;
    goodCat->makeSound();
    goodDog->makeSound();
    meta->makeSound();
    badAnimal->makeSound();
    badCat->makeSound();
    delete meta;
    delete goodDog;
    delete goodCat;
    delete badAnimal;
    delete badCat;
    return 0;
}