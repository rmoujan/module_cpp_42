/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_phbook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:40:55 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/03 15:33:08 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void protect_data_integer(int *number)
{
	
	while (std::cin.fail())
    {
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(INT_MAX, '\n'); // ignore last input
        std::cout << "You can only enter numbers.\n";
        std::cout << "Enter a number.\n";
        std::cin >> *number;
    }
}

void protect_data_str(std::string *str)
{
	
	while (std::cin.fail() || (str)->empty())
    {
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(INT_MAX, '\n'); // ignore last input
        std::cout << "Please enter your data.\n";
        // std::cout << "Enter a number.\n";
        std::cin >> *str;
    }
}

void add(PhoneBook *ph, Contact *ct, int *index)
{
	std::string first_name;
    std::string last_name;
    std::string nick_name;
    int phone_number;
    std::string darkest_secret;
	
	
	std::cout <<"Please enter the First Name\n";
	std::getline(std::cin, first_name);
	protect_data_str(	&first_name);
	std::cout <<"Please enter the Last Name\n";
	std::getline(std::cin, last_name);
	protect_data_str(&last_name);
	std::cout <<"Please enter the Nick Name\n";
	std::getline(std::cin, nick_name);
	protect_data_str(&nick_name);
	std::cout <<"Please enter the darkest secret\n";
	// std::cin>>darkest_secret;
	std::getline(std::cin, darkest_secret);
	// std::cout<<"darkest secret is "<<std::endl;
	protect_data_str(&darkest_secret);
	std::cout <<"Please enter the Phone Number"<<std::endl;
	std::cin>>phone_number;
	protect_data_integer(&phone_number);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	(*ct).ini(first_name,last_name, nick_name,phone_number, darkest_secret);
	(*ph).add(*ct, ph, *index);
	(*index)++;   
}

void searching(PhoneBook ph, int index)
{
	int searched;
	
	ph.display(ph, index);
    std::cout << "Enter a number.\n";
    std::cin>>searched;
    while (std::cin.fail())
    {
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(INT_MAX, '\n'); // ignore last input
        std::cout << "You can only enter numbers.\n";
        std::cout << "Enter a number.\n";
        std::cin >> searched;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    ph.search(ph, index, searched);
}