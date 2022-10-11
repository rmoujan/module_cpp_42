/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_phbook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:40:55 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/11 20:20:05 by rmoujan          ###   ########.fr       */
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
        if(std::cin.eof())
            exit(1);
    }while(std::cin.fail() || (first_name).empty());

    do{
        std::cout <<"Please enter the Last Name : ";
        std::getline(std::cin, last_name);
        if(std::cin.eof())
            exit(1);
    }while(std::cin.fail() || (last_name).empty());

    do{
        std::cout <<"Please enter the Nick Name : ";
        std::getline(std::cin, nick_name);
        if(std::cin.eof())
            exit(1);
    }while(std::cin.fail() || (nick_name).empty());

    do{
        std::cout <<"Please enter the darkest secret : ";
        std::getline(std::cin, darkest_secret);
        if(std::cin.eof())
            exit(1);
    }while(std::cin.fail() || (darkest_secret).empty());

    do{
        std::cout <<"Please enter the Phone Number : ";
        std::getline(std::cin, phone_number);
        if(std::cin.eof())
            exit(1);
    }while(std::cin.fail() || (phone_number).empty());
    
	(*ct).ini(first_name,last_name, nick_name,phone_number, darkest_secret);
	(*ph).add(*ct, ph, *index);
	(*index)++;   
}

void searching(PhoneBook ph, int index)
{
	std::string searched;
    int nbr;
    size_t i = 0;

	ph.display(ph, index);
    do{
        std::cout << "Enter a the index of the user that u looking for :\n";
        getline(std::cin, searched);
        if(std::cin.eof())
            exit(1);
    }while(searched.empty());
    
    while (i < searched.length())
    {
        if (!isdigit(searched[i]))
        {
            std::cout<<"The User does not exist"<<std::endl;
            return ;
        }
        i++;
    }
    nbr = std :: atoi(searched.c_str());
    ph.search(ph, index, nbr);
}