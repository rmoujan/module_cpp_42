/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:24 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/22 19:09:33 by rmoujan          ###   ########.fr       */
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
#include <algorithm>   

	// std::map<std::string, std::string> base;
	// void output_data(std::string filee, std::map<std::string, std::string> base);
	void creating_database(std::map<std::string, std::string> &base) ;
	int cheak_input_file(char *filee);
#endif
