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



int main(){
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    
    const Animal *array[9];
    int l;

    l = 0;
    while(l < 5)
    {
        array[l] = new Dog();
        l++;
    }
    while (l < 10)
    {
        array[l] = new Cat();
        l++;
    }
    l = 9;
    while (l >= 0)
    {
        delete array[l];
        l--;
    }
    return 0;
}