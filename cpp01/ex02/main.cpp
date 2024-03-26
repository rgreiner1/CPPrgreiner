/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:45:13 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/25 12:17:46 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include "cstring"
#include "sstream"
#include "cstdlib"

int main()
{
    std::string str;
    str = "HI THIS IS BRAIN";
    std::string *stringPTR;
    stringPTR = &str;
    std::string &stringREF = str;
    std::cout << std::endl;
    std::cout << "Adress of str : " << &str << std::endl;
    std::cout << "Adress of stringPTR : " << &stringPTR << std::endl;
    std::cout << "Adress of stringREF : " << stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of str : " << str << std::endl;
    std::cout << "Value of stringPTR : " << stringPTR << std::endl;
    std::cout << "Value of stringREF : " << stringREF << std::endl;
}