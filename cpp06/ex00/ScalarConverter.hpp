/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:26:18 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/24 11:10:39 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include <limits>
#include <cmath>

class  ScalarConverter
{
private:
    char toChar;
    int toInt;
    float toFloat;
    double toDouble;
public:
    ScalarConverter(/* args */);
    ~ ScalarConverter();
    void    convert(std::string toConvert);
    void    convertChar(char toConvert);
    void    convertInt(int toConvert);
    void    convertFloat(float toConvert);
    void    convertDouble(double toConvert);
    void    handleFloat(std::string toConvert);
    void    handleDouble(std::string toConvert);
};
#endif