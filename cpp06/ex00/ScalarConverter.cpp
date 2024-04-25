/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:26:15 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/25 15:00:00 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    
}

ScalarConverter::~ScalarConverter(){
    
}

ScalarConverter::ScalarConverter(const ScalarConverter& src){
    *this = src;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &src){
    this->toChar = src.toChar;
    this->toInt = src.toInt;
    this->toDouble = src.toDouble;
    this->toFloat = src.toFloat;
    return *this;
}


void    ScalarConverter::convertDouble(double toConvert , std::string stringNbr){
    toChar = static_cast<char>(toConvert);
    toInt = static_cast<int>(toConvert);
    toFloat = static_cast<float>(toConvert);
    toDouble = toConvert;
    if (toChar  && toConvert >= 0.0 && toConvert <= 127.0 && isprint(toConvert) != 0)
        std::cout << "Char : " << "'" << toChar << "'" << std::endl;
    else
        std::cout << "Char : Non displayable" << std::endl;
    if (checkOverflow(stringNbr, "int") == 0)
        std::cout << "Int : " << toInt << std::endl;
    else
        std::cout << "Int : Overflow" << std::endl;
    if (toFloat == toInt)
        std::cout << "Float : " << toFloat << ".0f" << std::endl;
    else
         std::cout << "Float : " << toFloat << "f" << std::endl;
    if (toDouble == toInt)
        std::cout << "Double : " << toDouble << ".0" << std::endl;
    else
        std::cout << "Double : " << toDouble << std::endl;    
}

void    ScalarConverter::convertFloat(float toConvert, std::string stringNbr){
    toChar = static_cast<char>(toConvert);
    toInt = static_cast<int>(toConvert);
    toFloat = toConvert;
    toDouble = static_cast<double>(toConvert);
    if (toChar  && toConvert >= 0.0f && toConvert <= 127.0f && isprint(toConvert) != 0)
        std::cout << "Char : " << "'" << toChar << "'" << std::endl;
    else
        std::cout << "Char : Non displayable" << std::endl;
    if (checkOverflow(stringNbr, "int") == 0)
        std::cout << "Int : " << toInt << std::endl;
    else
        std::cout << "Int : Overflow" << std::endl;
    if (toFloat == toInt)
        std::cout << "Float : " << toFloat << ".0f" << std::endl;
    else
         std::cout << "Float : " << toFloat << "f" << std::endl;
    if (toDouble == toInt)
        std::cout << "Double : " << toDouble << ".0" << std::endl;
    else
        std::cout << "Double : " << toDouble << std::endl;   
}

void    ScalarConverter::convertChar(char toConvert){
    toChar = toConvert;
    toInt = static_cast<int>(toConvert);
    toFloat = static_cast<float>(toConvert);
    toDouble = static_cast<double>(toConvert);
    std::cout << "Char : " << "'" << toChar << "'" << std::endl;
    std::cout << "Int : " << toInt << std::endl;
    std::cout << "Float : " << toFloat << ".0f" << std::endl;
    std::cout << "Double : " << toDouble << ".0" << std::endl;
}

void    ScalarConverter::convertInt(int toConvert){
    toChar = static_cast<char>(toConvert);
    toInt = toConvert;
    toFloat = static_cast<float>(toConvert);
    toDouble = static_cast<double>(toConvert);
    if (toChar && toConvert >= 0 && toConvert <= 127 && isprint(toConvert) != 0)
        std::cout << "Char : " << "'" << toChar << "'" << std::endl;
    else
        std::cout << "Char : Non displayable" << std::endl;
    std::cout << "Int : " << toInt << std::endl;
    std::cout << "Float : " << toFloat << ".0f" << std::endl;
    std::cout << "Double : " << toDouble << ".0" << std::endl;
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

int     ScalarConverter::checkOverflow(std::string toConvert, std::string type){
    std::stringstream ss;
    ss << toConvert;
    int n;
    double d;
    if (type == "int")
    {
        ss >> n;
        if(!ss.fail())
            return (0);
        else
            return (1);
    }
    if (type == "double")
    {
        ss >> d;
        if(!ss.fail())
            return (0);
        else
            return (1);
    }
    return (0);
}

void    ScalarConverter::convert(std::string toConvert){
    size_t i;
    int j;
    int l;

    i = 0;
    j = 0;
    l = 0;
    if (toConvert == "-inff" || toConvert == "+inff" || toConvert == "nanf")
        this->handleFloat(toConvert);
    else if (toConvert == "-inf" || toConvert == "+inf" || toConvert == "nan")
        this->handleDouble(toConvert);
    else if (toConvert.length() == 1 && isdigit(toConvert[0]) == 0 && isprint(toConvert[0]) != 0)
    {
        char charconvert = toConvert[0];
        this->convertChar(charconvert);
    }
    else if (toConvert.rfind("f") == toConvert.length() - 1)
    {
        j = 0;
        l = 0;
        while(isdigit(toConvert[i]) || toConvert[i] == 'f' || toConvert[i] == '.')
        {
            if(toConvert[i] == 'f')
                j++;
            if(toConvert[i] == '.')
                l++;
            i++;
        }
        if (j <= 1 && l <= 1)
        {
            float floatconvert = atof(toConvert.c_str());
            this->convertFloat(floatconvert, toConvert); 
        }
        else
            std::cout << "Is not a valid input" << std::endl;
        i = 0;
    }
    else if (toConvert.find(".") != toConvert.npos || checkOverflow(toConvert, "int") == 1)
    {
        j = 0;
        while(isdigit(toConvert[i]) || toConvert[i] == '.')
        {
            if(toConvert[i] == '.')
                j++;
            i++;
        }
        if (j <= 1)
        {
            double doubleconvert = atof(toConvert.c_str());
            this->convertDouble(doubleconvert, toConvert);
        }
        else
            std::cout << "Is not a valid input" << std::endl;
        i = 0;
    }
    else
    {
        while (isdigit(toConvert[i]) != 0 || toConvert[i] == '-' || toConvert[i] == '+')
            i++;
        if (toConvert.size() == i)
        {
            int intconvert = atoi(toConvert.c_str());
            this->convertInt(intconvert);
        }
        else
            std::cout << "Is not a valid input" << std::endl;
    }
}