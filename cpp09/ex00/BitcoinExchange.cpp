+ /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:17 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/16 08:55:55 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange :: BitcoinExchange() {
	std::cout << "Default constructor of BitcoinExchange has been invoked " << std::endl;
}

BitcoinExchange :: BitcoinExchange(const BitcoinExchange &obj) {
	std::cout << "Copy constructor of BitcoinExchange has been invoked " << std::endl;
	*this = obj;
}

BitcoinExchange &BitcoinExchange :: operator=(const BitcoinExchange &obj) {

	std::cout << "Copy assignment operator of BitcoinExchange has been invoked " << std::endl;
	this->base = obj.base;
	return (*this);
}

BitcoinExchange :: ~BitcoinExchange() {
	std::cout << "Destructor of BitcoinExchange has been invoked " << std::endl;
}

std :: map<std::string, std::string> BitcoinExchange ::getBase() const {
	return (this->base);
}

int BitcoinExchange :: check_format_line(std::string data)
{
	// if (data.find("|") == string::npos)
	// 	return (0);
	if (std::count(data.begin(), data.end(), '|') != 1)
		return (0);
	else if (std::count(data.begin(), data.end(), '-') != 2)
		return (0);
	return (1);	
}

int check_first(std::string word)
{
	//check is that last char is a space
	if (word[word.length() - 1] != ' ')
		return (0);
	//check is that bfr the last  char is a not a number
	else if(!isdigit(word[word.length() - 2]))
		return (0);
	//split the date by - and count the chars, must be 3 :
	
	return (1);
}


// weslt f parsing deyal date !!!
int BitcoinExchange :: check_date(std::string data)
{
	std::string word;

	if (!isdigit(data[0]))
		return (0);
	std::stringstream str(data);
	getline(str, word, '|')
	check_first(word);
	getline(str, word, '|')
	check_second(word);
	return (1);	
}

void BitcoinExchange :: output_data(std::string filee) {

	// fill the file into the base , cheak each line is correct, do the calcul then output
	std::ifstream infile;
	std::string	  data, key, value;
	float number;
	infile.open(filee);
	while ((infile >> data)) {
		check_format_line(data); //"date | value"
		check_date(data);		 //"YEAR-MONTH-DAY", YEAR MUST ENTER 2009 AND 2023 AND CHECK MONTH AND DAY
		check_number();			 // GREATHER THAN 1000 OR LESS THAN 0
		std::stringstream str(data);
		std::getline(str, key, ',');
		std::getline(str, value, ',');
		// std::cout << "key is " << key << " and value is |" << value << "|" << std::endl;
		// if (key.empty() || value.empty()) {
		// 	ft_errno(2);
		// }
		base.insert(std::pair<std::string, std::string>(key, value));
	}
}
