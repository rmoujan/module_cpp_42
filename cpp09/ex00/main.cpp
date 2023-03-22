/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/22 19:46:55 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {

	std::map<std::string, std::string> base;

	if (argc == 2){
		creating_database(base);
		if (!check_input_file(argv[1]))
			return (0);
		output_data(argv[1], base);
		// std::cout << "Element  MAP" << std::endl;
    	// for (auto i : base)
        // 	std::cout << i.first << " \t\t\t " << i.second << std::endl;
		return (0);
	}
	return (0);
}