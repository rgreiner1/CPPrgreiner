/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:46:35 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/15 11:25:01 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>


int main(int argc, char **argv)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			while(argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			std::cout << " ";
			i++;
			j = 0;
		}
	}
	std::cout << "\n";
}
