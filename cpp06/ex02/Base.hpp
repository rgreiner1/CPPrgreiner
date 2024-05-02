/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:06:33 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/26 12:34:28 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_H
# define BASE_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include <limits>
#include <cmath>
#include <stdint.h>

class Base
{
protected:

public:
    virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif