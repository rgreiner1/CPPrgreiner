/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:21:44 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/22 15:44:56 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include"AForm.hpp"

Bureaucrat::Bureaucrat(): _Name("Default"), _Grade(1){
	
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name (name){
	if (grade <= 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else if (grade >= 1 && grade <= 150)
		this->_Grade = grade;
}

Bureaucrat::~Bureaucrat(){
	
}

int	Bureaucrat::getGrade() const{
	return(this->_Grade);
}

const std::string Bureaucrat::getName()const{
	return(this->_Name);
}

Bureaucrat::Bureaucrat(const Bureaucrat& src){
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src){
	this->_Grade =  src.getGrade();
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade of Bureaucrat is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade of Bureaucrat is too low");
}

void	Bureaucrat::GradeIncrementation(){
	int tmp;
	try
	{
		tmp = this->_Grade;
		tmp--;
		if (tmp <= 0)
			throw GradeTooHighException();
		this->_Grade = tmp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::GradeDecrement(){
	int tmp;
	try
	{
		tmp = this->_Grade;
		tmp++;
		if (tmp > 150)
			throw GradeTooLowException();
		else
			this->_Grade = tmp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::signForm(AForm form){
	if (form.getSign() == 1)
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	if (form.getSign() == 0)
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because his grade is too low" << std::endl;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& rhs){
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (out);
}

void Bureaucrat::executeForm(AForm const & Form){
	try
	{
		if (this->getGrade() > Form.getGradeExec())
			throw GradeTooLowException();
		Form.exec();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}