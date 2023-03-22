/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:17 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/22 19:16:21 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void ft_errnoo(int code) {

	if (code == 1) {
		std::cout << "ERROR: COULD NOT OPEN FILE" << std::endl;
	} else if (code == 2) {
		std::cout << "ERROR: WRONG FORMAT OF DATA" << std::endl;
	} else if (code == 3) {
		std::cout << "ERROR: FILE IS EMPTY" << std::endl;
	} else if (code == 4) {
		std::cout << "ERROR: PLEASE ENTER A FILE" << std::endl;
	}
	exit(0);
}

void creating_database(std::map<std::string, std::string> &base) {

	std::ifstream infile;
	std::string	  data, key, value;

	infile.open("data.csv");
	if (infile == 0)
		ft_errnoo(1);
	infile >> data;
	if (data.empty())
		ft_errnoo(3);
	while ((infile >> data)) {
		std::stringstream str(data);
		std::getline(str, key, ',');
		std::getline(str, value, ',');
		base.insert(std::pair<std::string, std::string>(key, value));
	}
}

int cheak_input_file(char *filee)
{

	std::ifstream infile;
	std::string	  data;

	infile.open(filee);
	if (infile == 0)
	{
		ft_errnoo(1);
		return (0);
	}
	infile >> data;
	if (data.empty())
	{
		ft_errnoo(3);
		return (0);
	}
	return (1);
}

// starting calculate and proccess and input FILE !! 
