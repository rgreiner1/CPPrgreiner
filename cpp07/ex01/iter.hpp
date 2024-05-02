/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:06:26 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/30 10:17:56 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"

template<typename T>
void iter(const T *array, int size, void (*func)(const T&)){
    int i;
    
    i = 0;
    while(i < size)
    {
        func(array[i]);
        i++;
    }
}

template<typename T>
void iter(T *array, int size, void (*func)(T&)){
    int i;
    
    i = 0;
    while(i < size)
    {
        func(array[i]);
        i++;
    }
}

template<typename T, typename F>
void iter(const T *array, int size, void (*func)(const F&)){
    int i;
    
    i = 0;
    while(i < size)
    {
        func(array[i]);
        i++;
    }
}

template<typename T, typename F>
void iter(T *array, int size, void (*func)(F&)){
    int i;
    
    i = 0;
    while(i < size)
    {
        func(array[i]);
        i++;
    }
}
#endif