/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:58:14 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/28 10:49:20 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon  *weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &Weapon);
};

#endif