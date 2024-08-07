/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:14:05 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/21 14:20:27 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	int	i;
	std::string userinput;
	PhoneBook phonebook;
	i = 1;
	while (1)
	{
		std::cout << "Awaiting input" << std::endl;
		if(std::getline(std::cin, userinput).eof() != 0)
			return 0;
		if (userinput == "EXIT")
			return (1);
		if (userinput == "ADD")
		{
			phonebook.fill_info(i);
			i++;
		}
		if (userinput == "SEARCH")
			phonebook.print_phonebook(8);
	}
	return 0;
}