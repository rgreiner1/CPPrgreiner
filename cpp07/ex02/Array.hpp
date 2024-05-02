/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:22:21 by rgreiner          #+#    #+#             */
/*   Updated: 2024/04/30 14:13:25 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"

template <typename T>

class   Array{
	private :
		T *num;
		unsigned int _size;
	public :
		Array(){
			num = new T[0];
			_size = 0;
		};
		Array(unsigned int n){
			num = new T[n];
			_size = n;
		};
		Array(const Array& src){
			unsigned int i;
			i = 0;
			num = new T[src.size()];
			while (i < src.size())
			{
				num[i] = src.num[i];
				i++;
			}
			_size = src.size();
		};
		Array	&operator=(const Array &src){
			unsigned int i;
			i = 0;
			if (this->num)
				delete [] num;
			this->num = new T[src.size()];
			while (i < src.size())
			{
				this->num[i] = src.num[i];
				i++;
			}
			this->_size = src.size();
			return (*this);
		};
		~Array(){
			delete [] num;
		};
	    T& operator[] (unsigned int index){
			if (index >= this->_size || index < 0)
				throw std::exception();
			else
				return(num[index]);
		};
		unsigned int size()const{
			return (this->_size);
		};
		
};
#endif

