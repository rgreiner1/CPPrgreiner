/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:05:34 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/23 14:36:14 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"


class Intern
{
public:
    Intern(/* args */);
    ~Intern();
    AForm* newPresidentialPardonForm(std::string target);
    AForm* newRobotomyRequestForm(std::string target);
    AForm* newShrubberyCreation(std::string target);
    AForm *makeForm(std::string formName, std::string formTarget);
};

