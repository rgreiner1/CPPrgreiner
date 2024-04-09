/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:44:09 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 14:13:08 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"FragTrap.hpp"

FragTrap::FragTrap() :ClapTrap() {
	std::cout << "Constructor called and created a FragTrap" << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->Name = name;
	this->Hit_Points = 100;
	this->Energy_Points = 100;
	this->Attack_Damage = 30;
	std::cout << "Constructor called and created a FragTrap named " << this->Name << std::endl;
}

FragTrap::FragTrap(const FragTrap& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

FragTrap	&FragTrap::operator=(const FragTrap &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->Attack_Damage = src.getAttackDmg();
	this->Energy_Points = src.getEnergy();
	this->Name = src.getName();
	this->Hit_Points = src.getHitPoints();
	return *this;
}

FragTrap::~FragTrap(void){
	std::cout << "Destructor called and destroyed a FragTrap named " << this->getName() << std::endl;
}

void FragTrap::attack(const std::string& target){
	if (getEnergy() == 0){        
		std::cout << "FragTrap " << this->getName() << " don't have enough energy to attack" << std::endl;
		return ;
	}
	if (getHitPoints() == 0){
		std::cout << "FragTrap " << this->getName() << " don't have enough HP to attack" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " attacks " << target <<", causing "<< this->getAttackDmg() << " points of damage!" << std::endl;
	this->Energy_Points -= 1;
}

void FragTrap::takeDamage(unsigned int amount){
	if (getHitPoints() == 0){
		std::cout << "FragTrap " << this->getName() << " is already destroyed and can't be attacked anymore" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " takes " << amount <<" of damage!" << std::endl;
	if (amount > this->getHitPoints()){
		this->Hit_Points = 0;
		return ;
	}
	this->Hit_Points -= amount;
}
void FragTrap::beRepaired(unsigned int amount){
	if (getEnergy() == 0){        
		std::cout << "FragTrap " << this->getName() << " can't, heal because they don't have any energy left!" << std::endl;
		return ;
	}
	if (getHitPoints() == 0){
		std::cout << "FragTrap " << this->getName() << " is already destroyed and can't be healed" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " heals " << amount <<" of damage!" << std::endl;
	this->Hit_Points += amount;
	this->Energy_Points -= 1;
}

void    FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->getName() << " is requesting a high-five" << std::endl;
}