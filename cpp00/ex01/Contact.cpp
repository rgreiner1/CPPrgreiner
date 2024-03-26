/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:16:32 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/19 16:21:35 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"


Contact::Contact(void){
    std::cout << "Constructor called" << std::endl;
    return ;
}

Contact::~Contact(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}