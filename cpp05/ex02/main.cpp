/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:27:18 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/22 16:02:34 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"AForm.hpp"

int main(){
    Bureaucrat bur1("bur1", 1);
    PresidentialPardonForm test1("Bob");
    ShrubberyCreation test2("Home");
    RobotomyRequestForm test3("Hello");
    std::cout << test1.getName() << " and their target is : " << test1.getTarget() << std::endl;
    std::cout << test2.getName() << " and their target is : " << test2.getTarget() << std::endl;
    std::cout << test3.getName() << " and their target is : " << test3.getTarget() << std::endl;
    std::cout << std::endl;
    test1.execute(bur1);
    test1.beSigned(bur1);
    test1.execute(bur1);
    test2.beSigned(bur1);
    test2.execute(bur1);
    test3.beSigned(bur1);
    test3.execute(bur1);
    std::cout << std::endl;
    bur1.executeForm(test3);
}