/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outfile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:46:24 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/28 15:55:29 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"outfile.hpp"

void    Outfile::replace(std::string s1, std::string s2)
{
	std::size_t	foundpos;
	std::string str;
	ofs.open("Outfile");
	ifs.clear();
	ifs.seekg(0);
	while(getline(ifs, str))
	{
		while(1)
		{
			foundpos = str.find(s1, 0);
			if (foundpos != std::string::npos)
			{
				str.erase(foundpos, s1.size());
				str.insert(foundpos, s2);
			}
			else
			{
				ofs << str;
				ofs << std::endl;
				break;
			}
		}
	}		
}

Outfile::Outfile(char **argv) : ifs(argv[1]), ofs("Outfile"){
	char tmp;
	
	if (ifs.is_open())
	{
		while(ifs.get(tmp))
			ofs << tmp;
	}
	else
		std::cout << "Error when opening infile" << std::endl;
	std::cout << "Constructor called" << std::endl;
	ofs.close();
	//ifs.close();
	return ;
}

Outfile::~Outfile(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}