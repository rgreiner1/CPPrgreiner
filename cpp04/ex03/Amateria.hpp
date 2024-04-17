/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:18:05 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/17 16:46:25 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
#include "iostream"
#include "string"
#include "sstream"

class   ICharacter;
class AMateria
{
protected:
    std::string _Type;
public:
    AMateria(std::string const & type);
    AMateria();
    virtual ~AMateria();
    std::string const & getType() const;
    AMateria(const AMateria& src);
    AMateria &operator=(const AMateria&src);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif