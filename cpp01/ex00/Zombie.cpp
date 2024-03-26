/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:40:27 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/22 10:57:53 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void    Zombie::announce(){
    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl << std::endl;
}

Zombie::Zombie(std::string name){
	std::cout << "Constructor called" << std::endl;
	Zombie::name = name;
	return ;
}

Zombie::~Zombie(void){
	std::cout << "Destructor called : Zombie " << name << " was destroyed" << std::endl;
	return ;
}