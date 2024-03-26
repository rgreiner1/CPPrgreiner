/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:25:25 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/26 10:51:51 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack();
};

#endif