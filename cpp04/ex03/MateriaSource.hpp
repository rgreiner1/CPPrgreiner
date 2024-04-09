/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:34:40 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/09 16:11:35 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Amateria.hpp"


class MateriaSource : public IMateriaSource
{
private:
    /* data */
public:
    MateriaSource(/* args */);
    ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};
