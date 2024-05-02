/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:50:46 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/26 15:02:38 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"

template<typename T>
T max(T const & x, T const & y){
    return ((x > y) ? x : y);
}
template <typename T>
T min(T const & x, T const & y){
    return ((x < y) ? x : y);
}
template <typename T>
void swap(T  & x, T  & y){
    T  tmp;
    tmp = y;
    y = x;
    x = tmp;
}
#endif