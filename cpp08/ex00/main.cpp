/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:46:28 by rgreiner          #+#    #+#             */
/*   Updated: 2024/05/02 17:06:28 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"

int main(){
    std::vector<int>    tab(42);
    std::fill(tab.begin(), tab.begin() + 21, 1);
    std::fill(tab.begin() + 21, tab.begin() + 22, 2);
    std::fill(tab.begin() + 22, tab.end(), 3);
    std::cout  << "Searching for 10 in vector" << std::endl;
    easyfind(tab, 10);
    std::cout  << "Searching for 1 in vector" << std::endl;
    easyfind(tab, 1);
    std::deque<int> mydeque;
    for (int i=1; i<=5; i++)
        mydeque.push_back(i);
    std::cout  << "Searching for 100 in deque" << std::endl;
    easyfind(mydeque, 100);
    std::cout  << "Searching for 2 in deque" << std::endl;
    easyfind(mydeque, 2);
    int myints[] = {1,2,3,4,5};
    std::list<int> mylist (myints,myints+5);
    std::cout  << "Searching for 1000 in list" << std::endl;
    easyfind(mylist, 1000);
    std::cout  << "Searching for 3 in list" << std::endl;
    easyfind(mylist, 3);
}