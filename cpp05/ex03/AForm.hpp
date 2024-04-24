/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:30:30 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/19 15:51:55 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H
#include"Bureaucrat.hpp"

class AForm
{
private:
    const std::string _Name;
    bool _Sign;
    const int _GradeExec;
    const int _GradeSign;
public:
    AForm();
    AForm(std::string name, int gradesign, int gradeexec);
    AForm(std::string name);
    virtual ~AForm();
    virtual const std::string getName()const;
    virtual int getGradeExec()const;
    virtual int getGradeSign()const;
    virtual bool getSign()const;
    virtual void beSigned(Bureaucrat bureaucrat);
    virtual void execute(Bureaucrat const & executor) const;
    virtual void exec() const = 0;
    class GradeTooHighException : public std::exception{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
		const char* what() const throw();
	};
    class NotSignedException : public std::exception{
		const char* what() const throw();
	};
};
std::ostream& operator<< (std::ostream& out, AForm const& rhs);


#endif