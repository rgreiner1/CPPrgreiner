/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:17:18 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/17 17:17:35 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _Name;
    AMateria *materia[4];
public:
    Character();
    virtual ~Character();
    Character(std::string name);
    virtual std::string const & getName() const;
    AMateria *getMateria(int i);
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};
