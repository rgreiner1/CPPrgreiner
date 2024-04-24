/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:27:18 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/23 14:59:40 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"AForm.hpp"
#include"Intern.hpp"

int main(){
    std::cout << std::endl;
    Intern intern1;
    Bureaucrat bur1("bur1", 1);
    AForm *test1;
    AForm *test2;
    AForm *test3;
    AForm *test4;
    test1 = intern1.makeForm("PresidentialPardonForm", "bob");
    test2 = intern1.makeForm("RobotomyRequestForm", "Hello 2.0");
    test3 = intern1.makeForm("ShrubberyCreationForm", "World");
    test4 = intern1.makeForm("Doesn't exist", "void");
    std::cout << std::endl;
    test1->beSigned(bur1);
    test2->beSigned(bur1);
    test3->beSigned(bur1);
    test1->execute(bur1);
    test2->execute(bur1);
    test3->execute(bur1);
    delete test1;
    delete test2;
    delete test3;
    delete test4;
}