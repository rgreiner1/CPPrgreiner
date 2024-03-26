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

void    PhoneBook::fill_info(Contact *contact, int i){
	
	if (i > 8)
	{
		i = i % 8;
		if (i == 0)
			i = 8;
		std::cout << i;
		contact[i].first_name.clear();
		contact[i].last_name.clear();
		contact[i].nickname.clear();
		contact[i].phone_number.clear();
		contact[i].darkest_secret.clear();
		contact[i].cpy_first_name.clear();
		contact[i].cpy_last_name.clear();
		contact[i].cpy_nickname.clear();
	}
	while (contact[i].first_name.empty())
	{
		std::cout << "Awaiting input first_name" << std::endl;
		if (std::getline(std::cin, contact[i].first_name).eof() != 0)
			return ;
	}
	while (contact[i].last_name.empty())
	{
		std::cout << "Awaiting input last_name" << std::endl;
		if (std::getline(std::cin, contact[i].last_name).eof() != 0)
			return ;
	}
	while (contact[i].nickname.empty())
	{
		std::cout << "Awaiting input nickname" << std::endl;
		if (std::getline(std::cin, contact[i].nickname).eof() != 0)
			return ;
	}
	while (contact[i].phone_number.empty())
	{
		std::cout << "Awaiting input phone_number" << std::endl;
		if (std::getline(std::cin, contact[i].phone_number).eof() != 0)
			return ;
	}
	while (contact[i].darkest_secret.empty())
	{
		std::cout << "Awaiting input darkest secret" << std::endl;
		if (std::getline(std::cin, contact[i].darkest_secret).eof() != 0)
			return ;
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
		std::cout << "First Name : " << contact[input].cpy_first_name << std::endl;
		std::cout << "Last Name : "<< contact[input].cpy_last_name << std::endl;
		std::cout << "Nickname : "<< contact[input].cpy_nickname << std::endl;
		std::cout << "Phone Number : "<< contact[input].phone_number << std::endl;
		std::cout << "Darkest Secret : "<< contact[input].darkest_secret << std::endl;
	}
	else
	{
		std::cout << "Input is not a valid index" << std::endl;
		return ;
	}
}

void    PhoneBook::print_phonebook(Contact *contact, int len){
	
	int i;
	size_t len_str;
	i = 1;
	std::cout << "    Index|First name| Last name|  Nickname" << std::endl;
    while(i <= 8)
	{
		contact[i].cpy_first_name = contact[i].first_name;
		contact[i].cpy_last_name = contact[i].last_name;
		contact[i].cpy_nickname = contact[i].nickname;
		std::cout << "        ";
		std::cout << i;
		std::cout << "|";
		len_str = contact[i].first_name.size();
		while(len_str < 10)
		{
			std::cout << " ";
			len_str++;
		}
		if (len_str > 10)
		{
			contact[i].first_name.resize(9);
			contact[i].first_name.append(".");
		}
		std::cout << contact[i].first_name;
		std::cout << "|";
		len_str = contact[i].last_name.size();
		while(len_str < 10)
		{
			std::cout << " ";
			len_str++;
		}
		if (len_str > 10)
		{
			contact[i].last_name.resize(9);
			contact[i].last_name.append(".");
		}
		std::cout << contact[i].last_name;
		std::cout << "|";
		len_str = contact[i].nickname.size();
		while(len_str < 10)
		{
			std::cout << " ";
			len_str++;
		}
		if (len_str > 10)
		{
			contact[i].nickname.resize(9);
			contact[i].nickname.append(".");
		}
		std::cout << contact[i].nickname;
		std::cout << std::endl;
		i++;
  	}
	print_index(contact, len);
	return ;
}