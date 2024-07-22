/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:39:10 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 16:39:47 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat&);
    WrongCat &operator=(const WrongCat&src);
    void    makeSound(void) const;
};

#endif