/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgreiner <rgreiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:05:48 by rgreiner          #+#    #+#             */
/*   Updated: 2024/03/28 11:16:21 by rgreiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"outfile.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
		{
			std::cout << "Invalid arguments numbers" << std::endl;
			return (0);
		}
	Outfile	Sed(argv);
	Sed.replace(argv[2], argv[3]);
}