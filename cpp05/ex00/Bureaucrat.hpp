/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:20:07 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/19 10:10:40 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"

class Bureaucrat
{
private:
	const std::string _Name;
	int _Grade;

public:
	Bureaucrat(/* args */);
	Bureaucrat(const std::string name, int grade);
	const std::string getName()const;
	int getGrade()const;
	Bureaucrat(const Bureaucrat& src);
	Bureaucrat	&operator=(const Bureaucrat &src);
	~Bureaucrat();
	void	GradeIncrementation();
	void	GradeDecrement();
	class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};
std::ostream& operator<< (std::ostream& out, Bureaucrat const& rhs);


#endif