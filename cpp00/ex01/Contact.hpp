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
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    Contact(void);
    ~Contact(void);
    void set_First_Name(std::string str);
    void set_Last_Name(std::string str);
    void set_Nickname(std::string str);
    void set_Phone_Number(std::string str);
    void set_Darkest_Secret(std::string str);
    const std::string &get_First_Name() const;
    const std::string &get_Last_Name() const;
    const std::string &get_Nickname() const;
    const std::string &get_Phone_Number() const;
    const std::string &get_Darkest_Secret() const;
};

#endif