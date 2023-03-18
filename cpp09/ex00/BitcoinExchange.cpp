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

	return (*this);
}

BitcoinExchange ::~BitcoinExchange() {
	std::cout << "Destructor of BitcoinExchange has been invoked " << std::endl;
}