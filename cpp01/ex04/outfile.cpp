/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outfile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:46:24 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/26 17:22:53 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"outfile.hpp"

void    Outfile::replace(std::string s1, std::string s2)
{
    (void)s1;
    (void)s2;
}

Outfile::Outfile(){
    std::cout << "Constructor called" << std::endl;
    return ;
}

Outfile::~Outfile(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}