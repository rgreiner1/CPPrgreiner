/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:33:52 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/19 15:53:38 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

Form::Form() : _GradeExec(1), _GradeSign(1){
    
}

Form::~Form(){
    
}

Form::Form(std::string name, int gradesign, int gradeexec) : _Name(name) ,_GradeExec(gradeexec), _GradeSign(gradesign){
   	if (gradesign <= 0 || gradeexec <= 0)
		throw GradeTooHighException();
	else if (gradesign > 150 || gradeexec > 150)
		throw GradeTooLowException();
    this->_Sign = 0;
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("Grade of Form is too high");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Grade of Form is too low");
}

const std::string Form::getName()const{
    return(this->_Name);
}

int Form::getGradeExec()const{
    return(this->_GradeExec);
}

int Form::getGradeSign()const{
    return(this->_GradeSign);
}

bool Form::getSign()const{
    return(this->_Sign);
}

void    Form::beSigned(Bureaucrat bureaucrat){
    if(bureaucrat.getGrade() >= this->getGradeSign())
        throw GradeTooLowException();
    else
        this->_Sign = 1;
}

std::ostream& operator<<(std::ostream& out, Form const& rhs){
	out << "Form is named: " << rhs.getName() << ", grade required for execution : " << rhs.getGradeExec() << ", grade required to sign form : " << rhs.getGradeSign();
    if (rhs.getSign() == 0)
        out << " and form is not signed" << std::endl;
    if (rhs.getSign() == 1)
        out << " and form is signed" << std::endl;
    return (out);
}