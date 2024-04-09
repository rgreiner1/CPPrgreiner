/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:12:58 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 16:11:54 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Amateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure();
    ~Cure();
    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};
