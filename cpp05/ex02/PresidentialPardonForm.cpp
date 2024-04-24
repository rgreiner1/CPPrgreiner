/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:58:15 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/22 12:54:29 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Zaphod Beeblebrox", 25, 5){
    this->_Target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    
}

std::string PresidentialPardonForm::getTarget()const{
    return(this->_Target);
}

void    PresidentialPardonForm::exec() const{
    std::cout << "Informs that " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}