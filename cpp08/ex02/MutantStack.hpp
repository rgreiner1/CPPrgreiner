/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:34:56 by rgreiner          #+#    #+#             */
/*   Updated: 2024/05/06 16:25:48 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H
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
#include "stack"

template <typename T>
class MutantStack
{
private:
    T* _content;
public:
    MutantStack(/* args */){};
    ~MutantStack(){};
    void push(T toAdd){
        (void)toAdd;
    };
    void pop(){
        
    };
    bool empty() const{
        
    }
    size_t top(){
        return (0);
    };
    size_t size(){
        return (1);
    }
    iterator begin(){
        
    }
    iterator end(){
        
    };
};

#endif