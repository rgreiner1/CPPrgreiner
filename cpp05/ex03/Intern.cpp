/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:05:41 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/23 15:56:52 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"

Intern::Intern(){
    
}

Intern::~Intern(){
    
}

AForm* Intern::newPresidentialPardonForm(std::string target){
    PresidentialPardonForm *newForm = new PresidentialPardonForm(target);
    return(newForm);
}

AForm* Intern::newRobotomyRequestForm(std::string target){
    AForm *newForm = new RobotomyRequestForm(target);
    return(newForm);
}

AForm* Intern::newShrubberyCreation(std::string target){
    AForm *newForm = new ShrubberyCreation(target);
    return(newForm);
}

AForm *Intern::makeForm(std::string formName, std::string formTarget){
    (void)formName;
    AForm *(Intern::*funcs[])(std::string) = {&Intern::newPresidentialPardonForm,\
    &Intern::newRobotomyRequestForm, &Intern::newShrubberyCreation};
    std::string funcsName[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    int i = 0;
    while(formName.compare(funcsName[i]) != 0 && i < 3)
		i++;
    if (i == 3)
	{
		std::cout << "Name of the form doesn't exist, and because of that, the Intern can't create a new Form" << std::endl;
		return (NULL);
	}
    std::cout << "Intern create " << funcsName[i] << std::endl;
    return (this->*funcs[i])(formTarget);
}