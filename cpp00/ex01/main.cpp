/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:51:12 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/03 15:23:19 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    Contact		ct;
    PhoneBook	ph;
	int			index;
    std::string	choice;
	
	index = 0;
	
    std::cout<<"\033[31m ****************************************************************************"<<std::endl<<std::endl;
    std::cout <<"*  The Operations that you are able to implement on this program are :      *"<<std::endl;
    std::cout <<"*  ADD   : allow you to add new member to the phone book                    *"<<std::endl;
    std::cout <<"*  SEARCH: Display the saved contacts as a list                             *"<<std::endl;
    std::cout <<"*  EXIT  : exit from the whole prg                                          *"<<std::endl<<std::endl;;
    std::cout<<"****************************************************************************\033[0m"<<std::endl<<std::endl<<std::endl;;
    while (1)
    {
        std::cout<<"\033[92mPlease choose one of the choices above ***\033[0m \n";  
        std::getline(std::cin, choice);
        if (choice.compare("ADD") == 0)
			add(&ph, &ct, &index);
        else  if(choice.compare("SEARCH") == 0)
			searching(ph, index);
        else if(choice.compare("EXIT") == 0)
        {
            std::cout<<"EXIT"<<std::endl;
            //delete all contacts and exit
            break;
        }
    }
    // system("PhoneBook leaks");
    while(1);
    return (0);
}