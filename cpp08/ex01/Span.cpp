/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:40:04 by rgreiner          #+#    #+#             */
/*   Updated: 2024/05/06 17:40:16 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span(unsigned int n) :_size(n){
}

void    Span::addNumber(int nbr){
    try
    {
        if (std::distance(_nbr.begin(), _nbr.end()) == _size)
            throw listIsFull();
        _nbr.push_back(nbr);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
}

int Span::shortestSpan(){
    std::list<int>::iterator end;
    std::list<int>::iterator begin;
    int ret = 0;
    int i = 0;
    try
    {
        if (std::distance(_nbr.begin(), _nbr.end()) <= 1)
            throw listIsLessof2();
        _nbr.sort();
        end = (--_nbr.end());
        begin = _nbr.begin();
        while(i != std::distance(_nbr.begin(), _nbr.end()))
        {
            while (*begin != *end)
            {
                if (ret == 0 || ret > *end - *begin)
                    ret = *end - *begin;
                end--;
            }
            begin++;
            end = (--_nbr.end());
            i++;
        }
        return (ret);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (-1);
    } 
}

int Span::longestSpan(){
    std::list<int>::iterator end;
    std::list<int>::iterator begin;
    try
    {
        if (std::distance(_nbr.begin(), _nbr.end()) <= 1)
            throw listIsLessof2();
        _nbr.sort();
        end = _nbr.end();
        begin = _nbr.begin();
        return (*(--end) - *begin);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (-1);
    }
}

int f()
{
    static int i;
    return (++i);
}

void    Span::Spanfill(int first, int last){
    (void)first;
    (void)last;
    try
    {   
      //  if (std::distance(_nbr.begin(), _nbr.end())  >= _size)
    //     throw listIsFull();
        std::generate(_nbr.begin(), (_nbr.()), f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

Span::Span(){
}

Span::~Span(){
}

void    Span::printContent(std::ostream& out){
    for (std::list<int>::iterator i = this->_nbr.begin(); i != this->_nbr.end(); ++i)
        out << *i << std::endl;
}

const char *Span::listIsLessof2::what() const throw(){
	return ("List is less of 2 elements");
}

const char *Span::listIsFull::what() const throw(){
	return ("List is full");
}

std::ostream& operator<<(std::ostream& out, Span & rhs){
    rhs.printContent(out);
	return (out);
}
