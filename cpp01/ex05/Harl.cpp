/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:45:17 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/02 10:53:26 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"


void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger! If you did, I wouldn t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string funcs_name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	i = 0;

	while(level.compare(funcs_name[i]) != 0 && i < 4)
		i++;
	if (i == 4)
	{
		std::cout << "Fuction doesn't exist" << std::endl;
		return ;
	}
	(this->*funcs[i])();
}

Harl::Harl(void)
{
    std::cout << "Constructor called" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Destructor called" << std::endl;
}