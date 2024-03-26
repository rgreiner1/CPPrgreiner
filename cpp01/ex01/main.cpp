/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:35:30 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/22 12:42:38 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde1;
	Zombie *horde2;
	std::cout << std::endl;
	horde1 = zombieHorde(3, "Hello this is Horde 1");
	horde1[1].announce();
	std::cout << std::endl;
	horde2 = zombieHorde(5, "Hello this is Horde 2");
	horde2[4].announce();
	std::cout << std::endl;
	delete [] horde1;
	std::cout << std::endl;
	delete [] horde2;
	return (0);
}