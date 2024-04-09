/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:49:45 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 14:18:00 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main(){
    ScavTrap Scav("Hello 2.0");
    ClapTrap Clap("Hello");
    FragTrap Frag("HELLo");
    Scav.attack("Enemy 1");
    Clap.attack("Enemy 1");
    Frag.attack("Enemy 1");
    Scav.takeDamage(50);
    Clap.takeDamage(50);
    Frag.takeDamage(50);
    std::cout << Scav.getEnergy() << std::endl;
    std::cout << Clap.getEnergy() << std::endl;
    std::cout << Frag.getEnergy() << std::endl;
    Scav.guardGate();
    Frag.highFivesGuys();
   // Frag.guardGate();
    //Clap.guardGate();
}