/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:24:48 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 11:20:09 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"WrongAnimal.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

int main() {

    Animal *array[10];
    Animal cpy1;
    int i;

    i = 0;
    while(i < 5)
    {
        array[i] = new Dog();
        i++;
    }
    while (i <= 9)
    {
        array[i] = new Cat();
        i++;
    }
    array[0]->makeSound();
    array[4]->makeSound();
    array[5]->makeSound();
    array[9]->makeSound();
    Animal copy;
    Animal copy2(*array[1]);
    copy = *array[0];
    copy2.makeSound();
    copy.makeSound();
    for (int j = 0; j != i; j++)
        delete array[j];
    copy.makeSound();
    copy2.makeSound();
    return (0);
}