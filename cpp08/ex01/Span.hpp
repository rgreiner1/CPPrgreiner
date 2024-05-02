/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:39:27 by rgreiner          #+#    #+#             */
/*   Updated: 2024/05/02 15:35:08 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
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

class Span
{
private:
    std::list<int> _nbr;
    unsigned int _size;
public:
    Span();
    ~Span();
    Span(unsigned int n);
    void    addNumber(int nbr);
    int shortestSpan();
    int longestSpan();
    void    printContent(std::ostream& out);
    class listIsFull : public std::exception{
	    const char* what() const throw();
    };
    class listIsLessof2 : public std::exception{
	    const char* what() const throw();
    };
};
std::ostream& operator<< (std::ostream& out, Span & rhs);

#endif