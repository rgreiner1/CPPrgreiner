/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:57:33 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/04 13:46:48 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	if (a != b)
		std::cout << "a is different of b" << std::endl;
	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	if (a < b)
		std::cout << "a is less than b" << std::endl;
	if (a >= b)
		std::cout << "a is greater or equal of b" << std::endl;
	if (a <= b)
		std::cout << "a is less or equal of b" << std::endl;
	return 0;
}