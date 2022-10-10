/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_phbook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:40:55 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/10 18:21:03 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void add(PhoneBook *ph, Contact *ct, int *index)
{
	std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string  phone_number;
    std::string darkest_secret;
	
	do{     
	    std::cout <<"Please enter the First Name : ";
	    std::getline(std::cin, first_name);
    }while(std::cin.fail() || (first_name).empty());

    do{
        std::cout <<"Please enter the Last Name : ";
        std::getline(std::cin, last_name);   
    }while(std::cin.fail() || (last_name).empty());

    do{
        std::cout <<"Please enter the Nick Name : ";
        std::getline(std::cin, nick_name);
    }while(std::cin.fail() || (nick_name).empty());

    do{
        std::cout <<"Please enter the darkest secret : ";
        std::getline(std::cin, darkest_secret);
    }while(std::cin.fail() || (darkest_secret).empty());

    do{
        std::cout <<"Please enter the Phone Number : ";
        std::getline(std::cin, phone_number);    
    }while(std::cin.fail() || (phone_number).empty());
    
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