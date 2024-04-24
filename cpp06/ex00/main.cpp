/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:16:33 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/23 18:18:18 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
    if (argc != 2)
    {
        std::cout << "Bad arguments numbers" << std::endl;
        return (1);
    }
    ScalarConverter converter;
    converter.convert(argv[1]);
}