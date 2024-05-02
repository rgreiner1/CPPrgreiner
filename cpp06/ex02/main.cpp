/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:17:08 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/26 14:46:09 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"
#include"A.hpp"
#include"B.hpp"
#include"C.hpp"

int main (){
    A baseA;
    B baseB;
    C baseC;
    Base *newbase;
    newbase = generate();
    Base &newbaserefA = baseA;
    Base &newbaserefB = baseB;
    Base &newbaserefC = baseC;
    identify(newbase);
    std::cout << "refs :" << std::endl;
    identify(newbaserefA);
    identify(newbaserefB);
    identify(newbaserefC);
}