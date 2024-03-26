/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:05:48 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/26 17:26:25 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"outfile.hpp"

void	replace(char *s1, char *s2)
{
	(void)s1;
	(void)s2;
}

int main(int argc, char **argv)
{
	if (argc != 4)
		{
			std::cout << "Invalid arguments numbers" << std::endl;
			return (0);
		}
	std::ifstream   ifs(argv[1]);
	std::ofstream   ofs("outfile");
	char     tmp;
	if (!ifs.is_open())
	{
		std::cout << "Infile error" << std::endl;
		return (0);
	}
	while(ifs.get(tmp))
		ofs << tmp;
	ofs.replace(argv[2], argv[3]);
}