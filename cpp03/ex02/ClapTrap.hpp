/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:49:42 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 13:18:33 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"


class ClapTrap
{
protected:
    std::string Name;
    unsigned int Hit_Points;
    unsigned int Energy_Points;
    unsigned int Attack_Damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap&);
    ClapTrap &operator=(const ClapTrap&src);
    ~ClapTrap();
    std::string getName(void) const;
    unsigned int getAttackDmg(void) const;
    unsigned int getEnergy(void) const;
    unsigned int getHitPoints(void) const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif