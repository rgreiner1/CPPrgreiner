/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:47:17 by rgreiner          #+#    #+#             */
/*   Updated: 2024/05/02 17:53:09 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(100);
    sp.addNumber(20);
    sp.addNumber(30);
    sp.addNumber(4);
    sp.addNumber(5);
    std::cout << "ShortestSpan : " << sp.shortestSpan() << std::endl;
    std::cout << std::endl;
    std::cout << "Longest span : "<< sp.longestSpan() << std::endl;
    return 0;
}