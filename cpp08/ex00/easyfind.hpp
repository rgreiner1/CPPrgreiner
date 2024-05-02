/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:46:26 by rgreiner          #+#    #+#             */
/*   Updated: 2024/05/01 16:24:41 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_H
# define EASYFIND_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include "algorithm"
#include "vector"
#include "iterator"
#include "deque"
#include "list"



class Finderror : public std::exception{
	const char* what() const throw();
};

const char *Finderror::what() const throw(){
	return ("Couldn't find the number in the container");
}
template<typename T>
void easyfind(T x, int const & y){
    try
    {
        if (std::find(x.begin(), x.end(), y) == x.end())
           throw Finderror();
        else
            std::cout << *std::find(x.begin(), x.end(), y) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

#endif