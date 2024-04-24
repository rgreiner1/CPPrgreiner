/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:26:15 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/24 11:33:34 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    
}

ScalarConverter::~ScalarConverter(){
    
}

void    ScalarConverter::convertDouble(double toConvert){
    toChar = static_cast<char>(toConvert);
    toInt = static_cast<int>(toConvert);
    toFloat = static_cast<float>(toConvert);
    toDouble = toConvert;
    if (toChar)
        std::cout << "Char : " << toChar << std::endl;
    else
        std::cout << "Char : Non displayable" << std::endl;
    std::cout << "Int : " << toInt << std::endl;
    std::cout << "Float : " << toFloat << std::endl;
    std::cout << "Double : " << toDouble << std::endl;
}

void    ScalarConverter::convertFloat(float toConvert){
    toChar = static_cast<char>(toConvert);
    toInt = static_cast<int>(toConvert);
    toFloat = toConvert;
    toDouble = static_cast<double>(toConvert);
    if (toChar)
        std::cout << "Char : " << toChar << std::endl;
    else
        std::cout << "Char : Non displayable" << std::endl;
    std::cout << "Int : " << toInt << std::endl;
    std::cout << "Float : " << toFloat << std::endl;
    std::cout << "Double : " << toDouble << std::endl;
}

void    ScalarConverter::convertChar(char toConvert){
    toChar = toConvert;
    toInt = static_cast<int>(toConvert);
    toFloat = static_cast<float>(toConvert);
    toDouble = static_cast<double>(toConvert);
    std::cout << "Char : " << toChar << std::endl;
    std::cout << "Int : " << toInt << std::endl;
    std::cout << "Float : " << toFloat << std::endl;
    std::cout << "Double : " << toDouble << std::endl;
}

void    ScalarConverter::convertInt(int toConvert){
    toChar = static_cast<char>(toConvert);
    toInt = toConvert;
    toFloat = static_cast<float>(toConvert);
    toDouble = static_cast<double>(toConvert);
    if (toChar && toConvert >= 0 && toConvert <= 127)
        std::cout << "Char : " << "'" << toChar << "'" << std::endl;
    else
        std::cout << "Char : Non displayable" << std::endl;
    std::cout << "Int : " << toInt << std::endl;
    std::cout << "Float : " << toFloat << std::endl;
    std::cout << "Double : " << toDouble << std::endl;
}

void    ScalarConverter::handleFloat(std::string toConvert){
    std::cout << "Char : Impossible" << std::endl;
    std::cout << "Int : Impossible" << std::endl;
    std::cout << "Float : " << toConvert << std::endl;
    std::cout << "Double : " << toConvert.erase(toConvert.size() - 1) << std::endl;
}

void    ScalarConverter::handleDouble(std::string toConvert){
    std::cout << "Char : Impossible" << std::endl;
    std::cout << "Int : Impossible" << std::endl;
    std::cout << "Float : " << toConvert  + "f" << std::endl;
    std::cout << "Double : " << toConvert << std::endl;
}

void    ScalarConverter::convert(std::string toConvert){
    if (toConvert == "-inff" || toConvert == "+inff" || toConvert == "nanf")
        this->handleFloat(toConvert);
    else if (toConvert == "-inf" || toConvert == "+inf" || toConvert == "nan")
        this->handleDouble(toConvert);
    else if (toConvert.rfind("f") == toConvert.length() - 1)
    {
        float floatconvert = atof(toConvert.c_str());
        this->convertFloat(floatconvert); 
    }
    else if (toConvert.find(".") != toConvert.npos)
    {
        double doubleconvert = atof(toConvert.c_str());
        this->convertDouble(doubleconvert);
    }
    else if (toConvert.length() == 1 && isdigit(toConvert[0]) == 0 && isprint(toConvert[0]) != 0)
    {
        char charconvert = toConvert[0];
        this->convertChar(charconvert);
    }
    else
    {
        int intconvert = atoi(toConvert.c_str());
        this->convertInt(intconvert);
    }
}