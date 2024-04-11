/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:31:26 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/11 10:06:08 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materia[4];
public:
    MateriaSource(/* args */);
    ~MateriaSource();
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};
