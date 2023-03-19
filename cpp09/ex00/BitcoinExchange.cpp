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

	BitcoinExchange ::BitcoinExchange() {
	std::cout << "Default constructor of BitcoinExchange has been invoked " << std::endl;
}

BitcoinExchange ::BitcoinExchange(const BitcoinExchange &obj) {
	std::cout << "Copy constructor of BitcoinExchange has been invoked " << std::endl;
	*this = obj;
}

BitcoinExchange &BitcoinExchange ::operator=(const BitcoinExchange &obj) {

	std::cout << "Copy assignment operator of BitcoinExchange has been invoked " << std::endl;
	this->base = obj.base;
	return (*this);
}

BitcoinExchange ::~BitcoinExchange() {
	std::cout << "Destructor of BitcoinExchange has been invoked " << std::endl;
}

std::map<std::string, std::string> BitcoinExchange ::getBase() const {
	return (this->base);
}

void BitcoinExchange ::output_data(std::string filee) {

	// fill the file into the base , cheak each line is correct, do the calcul then output
	std::ifstream infile;
	std::string	  data, key, value;

	infile.open(file);
	while ((infile >> data)) {
		check_format(data); //"date | value"
		check_date(data);	//"YEAR-MONTH-DAY", YEAR MUST ENTER 2009 AND 2023 AND CHECK MONTH AND DAY
		check_number();		// GREATHER THAN 1000 OR LESS THAN 0
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
