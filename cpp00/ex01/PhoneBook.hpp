/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:43:25 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/20 11:23:22 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "iostream"
#include "string"
#include "cstring"
#include "sstream"
#include "cstdlib"
#include "Contact.hpp"
#include "iomanip"

class PhoneBook
{
private:
	Contact contact[9];
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	fill_info(int i);
	void	print_phonebook(int len);
	void	print_index(Contact *contact, int len);
	std::string	format(std::string str);
};

#endif