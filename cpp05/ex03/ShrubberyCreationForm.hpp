/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:49:49 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/23 14:37:33 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

class ShrubberyCreation : public AForm
{
private:
    std::string _Target;
public:
    ShrubberyCreation(/* args */);
    ShrubberyCreation(std::string target);
    ~ShrubberyCreation();
    virtual void exec() const;
    std::string getTarget() const;
};