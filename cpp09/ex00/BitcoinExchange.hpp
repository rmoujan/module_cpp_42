/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:24 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/19 00:30:27 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

class BitcoinExchange {
	// ITHINK IM GONNA DECLARE A DOUBLE VECTOR THAT WILL CONTAINS THE DATA OF THE INPUT FILE
	std::map<std::string, std::string> base;

  public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &obj);
	BitcoinExchange &operator=(const BitcoinExchange &obj);
	~BitcoinExchange();
	// void							   setBase();		// to set the object a map
	std::map<std::string, std::string> getBase() const; // to return the map
	void							   output_data(std::string file);

  private:
	void file_process(std::string filee);
	void check_error(std::string line);
};

#endif
