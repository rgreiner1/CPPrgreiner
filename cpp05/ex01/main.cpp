/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:27:18 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/19 14:26:50 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

int main(){
    std::cout << std::endl;
    try 
    {
        Bureaucrat bureaucrat1("bob", 5);
        std::cout << bureaucrat1;
        Form test1("Form1", 4, 1);
        std::cout << test1;
        test1.beSigned(bureaucrat1);
        bureaucrat1.signForm(test1);
        std::cout << test1;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try 
    {
        Bureaucrat bureaucrat1("BOB", 2);
        std::cout << bureaucrat1;
        Form test1("Form1", 4, 1);
        std::cout << test1;
        test1.beSigned(bureaucrat1);
        bureaucrat1.signForm(test1);
        std::cout << test1;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}