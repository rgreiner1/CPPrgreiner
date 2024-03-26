/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:35:30 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/22 10:59:38 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << std::endl;
	Zombie *cc = newZombie("Cc");
	cc->announce();
	randomChump("Hello");
	delete cc;
	return (0);
}