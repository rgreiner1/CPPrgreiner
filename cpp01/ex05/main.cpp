/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:45:23 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/02 10:57:55 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main()
{
	Harl harl;
	std::string userinput;

	harl.complain("DEBUG");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	harl.complain("HELLO");
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Awaiting input, use EXIT to quit" << std::endl;
		if(std::getline(std::cin, userinput).eof() != 0)
			return 0;
		if (userinput == "EXIT")
			return (1);
		else
			harl.complain(userinput);
	}
}