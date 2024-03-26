/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:15:52 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/20 12:04:05 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"

class Contact
{
private:

public:
    Contact(void);
    ~Contact(void);
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    std::string cpy_first_name;
    std::string cpy_last_name;
    std::string cpy_nickname;
};

#endif