/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/16 12:59:36 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "BitcoinExchange.hpp"
#include <fstream>

#include <iostream>

void ft_errno(int code) {
	if (code == 1) {
		std::cout << "ERROR: could not open file" << std::endl;
	}
}

int main(int argc, char *argv[]) {

	// u must declare a database here and put into it the data:
	//	this database is as vector 2-D 
	std::string data;

	std::ifstream infile;
	infile.open("data.csv");
	std::cout << "**************  ***** **** Reading from the file" << std::endl;
	map<string,string >base;
	
	while ((infile >> data))
	{

		std::cout << data << std::endl;
	}
	if (argc >= 2) {
		// DO THE WORK
		(void)argv[0];
		return (0);
	}
	// ft_errno(1);
	return (0);
}