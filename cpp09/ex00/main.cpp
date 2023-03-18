/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/18 18:54:02 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include <map>

void ft_errno(int code) {
	if (code == 1) {
		std::cout << "ERROR: could not open file" << std::endl;
	}
}
// using namespace std;
// getting data from file and put it into the map
void creating_database(std::map<std::string, std::string> &base) {

	std::ifstream infile;
	std::string	  data, key, value;

	infile.open("data.csv");
	infile >> data;
	while ((infile >> data)) {

		std::stringstream str(data);
		std::getline(str, key, ',');
		std::getline(str, value, ',');
		base.insert(std::pair<std::string, std::string>(key, value));
	}
}

int main(int argc, char *argv[]) {

	std::map<std::string, std::string> base;
	creating_database(base);
	std::cout << "OUTPUT MAP " << std::endl;
	for (auto itr = base.begin();
		 itr != base.end(); ++itr) {
		std::cout << itr->first << '\t'
				  << itr->second << '\n';
	}

	return (0);
}