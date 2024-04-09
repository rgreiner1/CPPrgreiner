/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:32:51 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 16:24:08 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Amateria.hpp"

class Ice : public AMateria
{
private:

public:
    Ice(/* args */);
    ~Ice();
    virtual AMateria* clone() const;
    void Ice::use(ICharacter& target);
};
