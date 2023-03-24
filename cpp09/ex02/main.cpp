/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:10:10 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/24 00:46:10 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void get_integers(char *data)
{
 	std::stringstream ss(data);  
    std::string word;
	float value;

    while (ss >> word) 
	{
		std::stringstream object;
		object << word;
		object >> value;
		if (value < 0)
		{
			std::cout <<"PLEASE ENTER ONLY POSITIVE VALUE "<<std::endl;
			exit(0);
		}
    }
}

void check_error(std::string data)
{
	for (size_t i = 0; i < data.length(); i++)
	{
		if (!isdigit(data[i]) && data[i] != ' ')
		{
			std::cout <<"PLEASE ENTER ONLY POSITIVE VALUE "<<std::endl;
			exit(0);
		}
	}
	
}

// void output()
// {

// }

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		check_error(argv[1]);
		get_integers(argv[1]);
		// sort();
		// output();
		return (0);
	}
	std::cout <<"Please Enter an argument "<<std::endl;
	return (0);
}