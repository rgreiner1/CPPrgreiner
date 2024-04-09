/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:49:40 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/04 16:03:36 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src){
	std::cout << "Copy assignment operator called" << std::endl;
	this->Attack_Damage = src.getAttackDmg();
	this->Energy_Points = src.getEnergy();
	this->Name = src.getName();
	this->Hit_Points = src.getHitPoints();
	return *this;
}

ClapTrap::ClapTrap(std::string name){
	this->Name = name;
	this->Hit_Points = 10;
	this->Energy_Points = 10;
	this->Attack_Damage = 0;
	std::cout << "Constructor called and created a ClapTrap named " << this->getName() << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called and destroyed a ClapTrap named" << this->getName() << std::endl;
}

std::string ClapTrap::getName(void) const{
	return(this->Name);
}

unsigned int ClapTrap::getAttackDmg(void) const{
	return(this->Attack_Damage);
}

unsigned int ClapTrap::getEnergy(void) const{
	return(this->Energy_Points);
}

unsigned int ClapTrap::getHitPoints(void) const{
	return(this->Hit_Points);
}

void ClapTrap::attack(const std::string& target){
	if (getEnergy() == 0){        
		std::cout << "ClapTrap " << this->getName() << " don't have enough energy to attack" << std::endl;
		return ;
	}
	if (getHitPoints() == 0){
		std::cout << "ClapTrap " << this->getName() << " don't have enough HP to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " attacks " << target <<", causing "<< this->getAttackDmg() << " points of damage!" << std::endl;
	this->Energy_Points -= 1;
}
void ClapTrap::takeDamage(unsigned int amount){
	if (getHitPoints() == 0){
		std::cout << "ClapTrap " << this->getName() << " is already destroyed and can't be attacked anymore" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " takes " << amount <<" of damage!" << std::endl;
	if (amount > this->getHitPoints()){
		this->Hit_Points = 0;
		return ;
	}
	this->Hit_Points -= amount;
}
void ClapTrap::beRepaired(unsigned int amount){
	if (getEnergy() == 0){        
		std::cout << "ClapTrap " << this->getName() << " can't, heal because they don't have any energy left!" << std::endl;
		return ;
	}
	if (getHitPoints() == 0){
		std::cout << "ClapTrap " << this->getName() << " is already destroyed and can't be healed" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " heals " << amount <<" of damage!" << std::endl;
	this->Hit_Points += amount;
	this->Energy_Points -= 1;
}