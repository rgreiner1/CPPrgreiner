/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:09:19 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/26 14:00:17 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"
#include"A.hpp"
#include"B.hpp"
#include"C.hpp"

Base::~Base(){
    
}

Base *generate(void){
    srand (time(NULL));
    int random_value = std::rand();
    if (random_value % 3 == 0)
        return (new A);
    else if (random_value % 2 == 0)
        return (new B);
    else
        return (new C);
}

void identify(Base *p){
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Is of type A" << std::endl;
    if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Is of type B" << std::endl;
    if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Is of type C" << std::endl;
}

void identify(Base &p){
    try
    {
        (void)dynamic_cast<A&>(p); 
        std::cout << "Is of type A" << std::endl;
    }
    catch (std::exception& e)
    {
        
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Is of type B" << std::endl;
    }
    catch(std::exception& e)
    {

    }
    try
    {   
        (void)dynamic_cast<C&>(p);
        std::cout << "Is of type C" << std::endl;
    }
    catch(std::exception& e)
    {
        
    }
}