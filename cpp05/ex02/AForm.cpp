/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:33:52 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/22 12:51:38 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

AForm::AForm() : _GradeExec(1), _GradeSign(1){
    
}

AForm::~AForm(){
    
}

AForm::AForm(std::string name, int gradesign, int gradeexec) : _Name(name) ,_GradeExec(gradeexec), _GradeSign(gradesign){
   	if (gradesign <= 0 || gradeexec <= 0)
		throw GradeTooHighException();
	else if (gradesign > 150 || gradeexec > 150)
		throw GradeTooLowException();
    this->_Sign = 0;
}

const char *AForm::GradeTooHighException::what() const throw(){
	return ("Grade of Form is too high");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("Grade of Form is too low");
}

const char *AForm::NotSignedException::what() const throw(){
	return ("Form is not signed");
}

const std::string AForm::getName()const{
    return(this->_Name);
}

int AForm::getGradeExec()const{
    return(this->_GradeExec);
}

int AForm::getGradeSign()const{
    return(this->_GradeSign);
}

bool AForm::getSign()const{
    return(this->_Sign);
}

void    AForm::beSigned(Bureaucrat bureaucrat){
    if(bureaucrat.getGrade() >= this->getGradeSign())
        throw GradeTooLowException();
    else
        this->_Sign = 1;
}

std::ostream& operator<<(std::ostream& out, AForm const& rhs){
	out << "Form is named: " << rhs.getName() << ", grade required for execution : " << rhs.getGradeExec() << ", grade required to sign form : " << rhs.getGradeSign();
    if (rhs.getSign() == 0)
        out << " and form is not signed" << std::endl;
    if (rhs.getSign() == 1)
        out << " and form is signed" << std::endl;
    return (out);
}

void    AForm::execute(Bureaucrat const & executor) const{
    try
    {
        if (this->getGradeExec() < executor.getGrade())
            throw GradeTooLowException();
        if (this->getSign() == 0)
            throw NotSignedException();
        this->exec();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}