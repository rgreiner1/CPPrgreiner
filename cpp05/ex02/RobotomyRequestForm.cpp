/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:47:50 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/22 13:08:21 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"
#include"time.h"

RobotomyRequestForm::RobotomyRequestForm(){
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robot", 72, 45){
    this->_Target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    
}

std::string RobotomyRequestForm::getTarget()const{
    return(this->_Target);
}

void    RobotomyRequestForm::exec() const{
    srand (time(NULL));
    int random_value = std::rand();
    std::cout << "Bzzzzzzzzzzzzzzzzzzt" << std::endl;
    if (random_value % 2 == 0)
        std::cout << "Robotomy of " << this->getTarget() << " is a success" << std::endl;
    else
        std::cout << "Robotomy of " << this->getTarget() << " has failed" << std::endl;
}