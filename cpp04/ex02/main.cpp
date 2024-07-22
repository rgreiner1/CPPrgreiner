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

#include"AAnimal.hpp"
#include"WrongAnimal.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"
#include"Dog.hpp"
#include"Brain.hpp"

int main() {

    AAnimal *array[10];
    //AAnimal test;
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
    for (int j = 0; j != i; j++)
        delete array[j];
    return (0);
}