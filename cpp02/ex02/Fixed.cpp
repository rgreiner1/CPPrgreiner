/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:39:38 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/04 13:46:06 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed(void): RawBits(0){
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int src){
//   std::cout << "Int constructor called" << std::endl;
    RawBits = src * 256;
}

Fixed::Fixed(const float src){
//   std::cout << "Float constructor called" << std::endl;
    RawBits = roundf(src * 256.0f);
}

Fixed::Fixed(const Fixed& src){
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void){
//	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &src){
//	std::cout << "Copy assignment operator called" << std::endl;
	if(this == &src)
    	return *this; 
	this->RawBits = src.getRawBits();
	return *this;
}

std::ostream& operator<< (std::ostream& out, Fixed const& rhs){
	out << rhs.toFloat();
	return (out);
}

int Fixed::getRawBits(void) const{
	return(this->RawBits);
}

void Fixed::setRawBits(int const raw){
	this->RawBits = raw;
}

float Fixed::toFloat( void ) const{
  return (static_cast<float>(this->getRawBits()) / (1 << Raw));
}

int Fixed::toInt( void ) const{
    return (this->getRawBits() / (1 << Raw));
}

Fixed Fixed::operator+(const Fixed&a) const{
	return Fixed(this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(const Fixed&a) const{
	return Fixed(this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(const Fixed&a) const{
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed&a) const{
	return Fixed(this->toFloat() / a.toFloat());
}


Fixed  &Fixed::min(Fixed&a, Fixed&b){
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed const  &Fixed::min(const Fixed&a, const Fixed&b){
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed  &Fixed::max(Fixed&a, Fixed&b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed const  &Fixed::max(const Fixed&a, const Fixed&b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	++*this;
	return(temp);
}

Fixed Fixed::operator--(int){
	Fixed temp = *this;
	--*this;
	return(temp);	
}

Fixed& Fixed::operator++(){
	RawBits++;
	return *this;
}

Fixed& Fixed::operator--(){
	RawBits--;
	return *this;
}

bool Fixed::operator==(const Fixed& a) {
  return this->getRawBits() == a.getRawBits();
}

bool Fixed::operator!=(const Fixed& a) {
  return !(this->getRawBits() == a.getRawBits());
}

bool Fixed::operator>(const Fixed& a) {
  return (this->getRawBits() > a.getRawBits());
}

bool Fixed::operator<(const Fixed& a) {
  return (this->getRawBits() < a.getRawBits());
}

bool Fixed::operator>=(const Fixed& a) {
  return (this->getRawBits() >= a.getRawBits());
}

bool Fixed::operator<=(const Fixed& a) {
  return (this->getRawBits() <= a.getRawBits());
}
