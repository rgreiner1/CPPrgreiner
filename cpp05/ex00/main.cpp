/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:27:18 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/18 17:24:25 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(){
    std::cout << std::endl;
    std::cout << "Constructors" << std::endl;
    std::cout << std::endl;
    try 
    {
        Bureaucrat test1("Test1", 0);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat test2("Test2", 100);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat test3("Test3", 1000);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Incrementation /  Decrement" << std::endl;
    std::cout << std::endl;
    Bureaucrat test4("Test4", 2);
    std::cout << test4;
    test4.GradeIncrementation();
    std::cout << test4; 
    test4.GradeIncrementation();
    std::cout << test4; 
    Bureaucrat test5("Test5", 149);
    std::cout << test5;
    test5.GradeDecrement();
    std::cout << test5; 
    test5.GradeDecrement();
    std::cout << test5; 

}