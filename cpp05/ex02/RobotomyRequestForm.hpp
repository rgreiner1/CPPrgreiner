/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:49:40 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/22 12:24:31 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string _Target;
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    virtual void exec() const;
    std::string getTarget() const;
};