/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:58:18 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/23 14:35:12 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string _Target;
public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    virtual void exec() const;
    std::string getTarget() const;
};