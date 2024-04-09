/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:57:20 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 14:06:39 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

ScavTrap::ScavTrap() :ClapTrap() {
	std::cout << "Constructor called and created a ScavTrap" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->Name = name;
	this->Hit_Points = 100;
	this->Energy_Points = 50;
	this->Attack_Damage = 20;
	std::cout << "Constructor called and created a ScavTrap named " << this->Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->Attack_Damage = src.getAttackDmg();
	this->Energy_Points = src.getEnergy();
	this->Name = src.getName();
	this->Hit_Points = src.getHitPoints();
	return *this;
}

ScavTrap::~ScavTrap(void){
	std::cout << "Destructor called and destroyed a ScavTrap named " << this->getName() << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (getEnergy() == 0){        
		std::cout << "ScavTrap " << this->getName() << " don't have enough energy to attack" << std::endl;
		return ;
	}
	if (getHitPoints() == 0){
		std::cout << "ScavTrap " << this->getName() << " don't have enough HP to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target <<", causing "<< this->getAttackDmg() << " points of damage!" << std::endl;
	this->Energy_Points -= 1;
}

void ScavTrap::takeDamage(unsigned int amount){
	if (getHitPoints() == 0){
		std::cout << "ScavTrap " << this->getName() << " is already destroyed and can't be attacked anymore" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " takes " << amount <<" of damage!" << std::endl;
	if (amount > this->getHitPoints()){
		this->Hit_Points = 0;
		return ;
	}
	this->Hit_Points -= amount;
}
void ScavTrap::beRepaired(unsigned int amount){
	if (getEnergy() == 0){        
		std::cout << "ScavTrap " << this->getName() << " can't, heal because they don't have any energy left!" << std::endl;
		return ;
	}
	if (getHitPoints() == 0){
		std::cout << "ScavTrap " << this->getName() << " is already destroyed and can't be healed" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " heals " << amount <<" of damage!" << std::endl;
	this->Hit_Points += amount;
	this->Energy_Points -= 1;
}

void    ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode " << std::endl;
}