/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:39:41 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/02 14:33:50 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"
#include "cmath"

class Fixed
{
private:
	int RawBits;
	static int const Raw = 8;
public:
	Fixed();
	Fixed(const int src);
	Fixed(const float src);
	Fixed(const Fixed&);
	~Fixed();
	Fixed &operator=(const Fixed&src);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<< (std::ostream& out, Fixed const& rhs);

#endif