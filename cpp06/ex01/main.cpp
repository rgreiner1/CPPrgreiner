/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:51:22 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/26 11:04:49 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"

struct Data{
    int nbr;
    std::string name;
}myData;

int main(){
    Data structtest;
    Data *returnstruct;
    Serializer serializer;
    structtest.name = "bob";
    structtest.nbr = 1;
   //std::cout << returnstruct->name << std::endl << returnstruct->nbr << std::endl;
    returnstruct = serializer.deserialize(serializer.serialize(&structtest));
    std::cout << returnstruct->name << std::endl << returnstruct->nbr << std::endl;
}