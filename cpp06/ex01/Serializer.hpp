/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:39:46 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/26 11:02:47 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include <limits>
#include <cmath>
#include <stdint.h>


struct Data;
class Serializer
{
private:
    /* data */
public:
    Serializer(/* args */);
    ~Serializer();
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

#endif
