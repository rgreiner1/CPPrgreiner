/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:49:45 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 13:41:12 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main(){
    ScavTrap Scav("Hello 2.0");
    ClapTrap Clap("Hello");
    Scav.attack("Enemy 1");
    Clap.attack("Enemy 1");
    Scav.takeDamage(50);
    Clap.takeDamage(50);
    std::cout << Scav.getHitPoints() << std::endl;
    std::cout << Clap.getHitPoints() << std::endl;
    Scav.guardGate();
    //Clap.guardGate();
}