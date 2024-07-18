/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:28:06 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/21 14:28:07 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void    PhoneBook::fill_info(int i){
	
	std::string input;
	if (i > 8)
	{
		i = i % 8;
		if (i == 0)
			i = 8;
		contact[i].set_First_Name("");
		contact[i].set_Last_Name("");
		contact[i].set_Nickname("");
		contact[i].set_Phone_Number("");
		contact[i].set_Darkest_Secret("");
	}
	while (input.empty())
	{
		std::cout << "Awaiting input first_name" << std::endl;
		if (std::getline(std::cin, input).eof() != 0)
			return ;
		contact[i].set_First_Name(input);
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "Awaiting input last_name" << std::endl;
		if (std::getline(std::cin, input).eof() != 0)
			return ;
		contact[i].set_Last_Name(input);
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "Awaiting input nickname" << std::endl;
		if (std::getline(std::cin,input).eof() != 0)
			return ;
		contact[i].set_Nickname(input);
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "Awaiting input phone_number" << std::endl;
		if (std::getline(std::cin, input).eof() != 0)
			return ;
		contact[i].set_Phone_Number(input);
	}
	input.clear();
	while (input.empty())
	{
		std::cout << "Awaiting input darkest secret" << std::endl;
		if (std::getline(std::cin, input).eof() != 0)
			return ;
		contact[i].set_Darkest_Secret(input);
	}
	return ;
}

void	PhoneBook::print_index(Contact *contact, int len){
	
	std::string userinput;
	int	input;
	(void)len;
	
	std::cout << "Awaiting Index" << std::endl;
	if (std::getline(std::cin, userinput).eof() != 0)
		return ;
	if (userinput.size() == 1 && userinput[0] > '0' && userinput[0] <= '8')
	{
		input = std::atoi(userinput.c_str());
		std::cout << "First Name : " << contact[input].get_First_Name() << std::endl;
		std::cout << "Last Name : "<< contact[input].get_Last_Name() << std::endl;
		std::cout << "Nickname : "<< contact[input].get_Nickname() << std::endl;
		std::cout << "Phone Number : "<< contact[input].get_Phone_Number() << std::endl;
		std::cout << "Darkest Secret : "<< contact[input].get_Darkest_Secret() << std::endl;
	}
	else
	{
		std::cout << "Input is not a valid index" << std::endl;
		return ;
	}
}

std::string	PhoneBook::format(std::string str)
{
	if(str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);

}

void    PhoneBook::print_phonebook(int len){
	
	int i;
	i = 1;
	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
    while(i <= 8)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << format(contact[i].get_First_Name()) << "|";
		std::cout << std::setw(10) << format(contact[i].get_Last_Name()) << "|";
		std::cout << std::setw(10) << format(contact[i].get_Nickname()) << std::endl;	
		i++;
  	}
	print_index(contact, len);
	return ;
}