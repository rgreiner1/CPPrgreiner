/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:30:30 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/19 14:24:28 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
#include"Bureaucrat.hpp"

class Form
{
private:
    const std::string _Name;
    bool _Sign;
    const int _GradeExec;
    const int _GradeSign;
public:
    Form();
    Form(std::string name, int gradesign, int gradeexec);
    ~Form();
    const std::string getName()const;
    int getGradeExec()const;
    int getGradeSign()const;
    bool getSign()const;
    void beSigned(Bureaucrat bureaucrat);
    class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
};
std::ostream& operator<< (std::ostream& out, Form const& rhs);


#endif