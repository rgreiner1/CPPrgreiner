/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outfile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:45:46 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/28 11:10:42 by rgreiner         ###   ########.fr       */
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
    std::ifstream   ifs;
    std::ofstream   ofs;
public:
    Outfile(char **argv);
    ~Outfile();
    void replace(std::string s1, std::string s2);
};

#endif