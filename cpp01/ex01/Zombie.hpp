/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:38:13 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/22 15:06:04 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
#include "iostream"
#include "string"
#include "cstring"
#include "sstream"
#include "cstdlib"

class Zombie
{
private:
    std::string name;
public:
    void    announce(void);
    Zombie();
    Zombie(std::string name);
    ~Zombie();

}; 
   Zombie* zombieHorde( int N, std::string name );
	void randomChump( std::string name );
	Zombie* newZombie( std::string name );
#endif