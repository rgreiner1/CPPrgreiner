/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:47:52 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:57:16 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_H
# define BRAIN_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include "Cat.hpp"
#include "Dog.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain&);
    Brain &operator=(const Brain&src);
};

#endif
