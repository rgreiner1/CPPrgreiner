/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:50:27 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/08 17:07:30 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain(){
	std::cout << "Constructor called and created a Brain" << std::endl;
}

Brain::~Brain(void){
	std::cout << "Destructor called and destroyed a Brain" << std::endl;
}

Brain::Brain(const Brain& src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Brain	&Brain::operator=(const Brain &src){
	std::cout << "Copy assignment operator called" << std::endl;
	int i;

	i = 0;
	while(!src.ideas[i].empty())
	{
		this->ideas[i] = src.ideas[i];
		i++;	
	}
	return *this;
}