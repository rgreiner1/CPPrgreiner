/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:14:43 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/26 17:45:01 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string newtype);
	~Weapon();
	const	std::string&	getType();
	void	setType(std::string newtype);
};

#endif