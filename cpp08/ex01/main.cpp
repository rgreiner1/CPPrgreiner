/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:47:17 by rgreiner          #+#    #+#             */
/*   Updated: 2024/05/06 17:38:20 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

int main()
{
    Span sp = Span(100);
  //  sp.addNumber(100);
  //  sp.addNumber(20);
   // sp.addNumber(40);
   // sp.addNumber(50);
 //   sp.addNumber(11);
  //  sp.addNumber(52);
   // std::cout << "ShortestSpan : " << sp.shortestSpan() << std::endl;
    std::cout << std::endl;
    //std::cout << "Longest span : "<< sp.longestSpan() << std::endl;
    sp.Spanfill(1, 100);
    std::cout << sp;
    return 0;
}