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

void Contact::set_First_Name(std::string str){
    this->first_name = str;
}
void Contact::set_Last_Name(std::string str){
    this->last_name = str;
}
void Contact::set_Nickname(std::string str){
    this->nickname = str;
}
void Contact::set_Phone_Number(std::string str){
    this->phone_number = str;
}
void Contact::set_Darkest_Secret(std::string str){
    this->darkest_secret = str;
}
const std::string &Contact::get_First_Name() const{
    return (this->first_name);
}
const std::string &Contact::get_Last_Name() const{
    return (this->last_name);
}
const std::string &Contact::get_Nickname() const{
    return (this->nickname);
}
const std::string &Contact::get_Phone_Number() const{
    return (this->phone_number);
}
const std::string &Contact::get_Darkest_Secret() const{
    return (this->darkest_secret);
}