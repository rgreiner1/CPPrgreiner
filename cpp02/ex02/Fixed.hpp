/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:39:41 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/04 13:46:08 by rgreiner         ###   ########.fr       */
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
	Fixed operator+(const Fixed&a) const;
	Fixed operator-(const Fixed&a) const;
	Fixed operator*(const Fixed&a) const;
	Fixed operator/(const Fixed&a) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed 	&min(Fixed&a, Fixed&b);
	static const Fixed	&min(const Fixed&a, const Fixed&b);
	static Fixed 	&max(Fixed&a, Fixed&b);
	static const Fixed	&max(const Fixed&a, const Fixed&b);
	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();
	bool operator==(const Fixed& a);
	bool operator!=(const Fixed& a);
	bool operator>(const Fixed& a);
	bool operator<(const Fixed& a);
	bool operator<=(const Fixed& a);
	bool operator>=(const Fixed& a);
};

std::ostream& operator<< (std::ostream& out, Fixed const& rhs);

#endif