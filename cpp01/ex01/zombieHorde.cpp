/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:02:23 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/22 12:22:24 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	
	int i = 0;
	if (N == 0)
		return (NULL);
	Zombie *zombie = new Zombie[N]; 
	while (i < N)
	{
		zombie[i] = Zombie(name);
		i++;
	}
	return(zombie);
}