/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/20 00:53:33 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

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

void calcul_komma(std::string data) {

	int			count = 0;
	std::string key;

	std::stringstream str(data);
	while (std::getline(str, key, ','))
		count++;
	if (count != 2)
		ft_errnoo(2);
}

// using namespace std;
// getting data from file and put it into the map
// without check the error, I suppose that the database is correct
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
		// std::cout << data << std::endl;
		// calcul_komma(data);
		std::stringstream str(data);
		std::getline(str, key, ',');
		std::getline(str, value, ',');
		// std::cout << "key is " << key << " and value is |" << value << "|" << std::endl;
		// if (key.empty() || value.empty()) {
		// 	ft_errnoo(2);
		// }
		base.insert(std::pair<std::string, std::string>(key, value));
	}
}

// cheak file, handle error and put the data into a container map
// take the line , cheak is | exist and cheak format of date(I think 7eta tbghi t outputi)
// f had cheak, chaeki ghi wash kayna | f line
int cheak_file(char *filee) {

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
	// had partie andirha f cheak d file , 7it i7timal delimiter maykonsh |
	// 7it khaski tejibii line , chekiha then dir operation
	// while ((infile >> data)) {
	//  	std::cout << "DATA IS " << data << std::endl;
	//  	std::stringstream str(data);
	//  	std::getline(str, key, '|');
	//  	std::getline(str, value, '|');
	//  	base.insert(std::pair<std::string, std::string>(key, value));
	//  }
}

int main(int argc, char *argv[]) {

	// std::map<std::string, std::string> base;
	// std::map<std::string, std::string> base;
	// std::map<std::string, std::string> input;
	if (argc == 2) {
		// creating_database(base);
		// std::cout << "OUTPUT MAP " << std::endl;
		// for (auto itr = base.begin();
		// 	 itr != base.end(); ++itr) {
		// 	std::cout << itr->first << '\t'
		// 			  << itr->second << '\n';
		// }
		if (!cheak_file(argv[1]))
			return (0);
		BitcoinExchange obj;
		obj.output_data(argv[1]);
		return (0);
	}
	ft_errnoo(4);
	return (0);
}