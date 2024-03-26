/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outfile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:45:46 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/26 17:22:48 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTFILE_H
# define OUTFILE_H
#include "iostream"
#include "string"
#include "sstream"
#include "cstdlib"
#include "fstream"

class Outfile
{
private:
public:
    Outfile();
    ~Outfile();
    void replace(std::string s1, std::string s2);
    std::ofstream   ofs;
};

#endif