/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:49:45 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/04 14:46:54 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(){
    ClapTrap Clap("Clap");
    ClapTrap Trap("Trap");
    Clap.attack("Enemy 1");
    Clap.takeDamage(9999);
    Clap.attack("Enemy 1");
    Clap.beRepaired(4);
    Trap.attack("Enemy 1");
    Trap.takeDamage(9);
    std::cout << Trap.getHitPoints() << std::endl;
    Trap.beRepaired(1);
    Trap.beRepaired(1);
    Trap.beRepaired(1);
    Trap.beRepaired(1);
    Trap.beRepaired(1);
    Trap.beRepaired(1);
    Trap.beRepaired(1);
    Trap.beRepaired(1);
    Trap.beRepaired(1);
    std::cout << Trap.getHitPoints() << std::endl;
    Trap.attack("Enemy 1");
    
}