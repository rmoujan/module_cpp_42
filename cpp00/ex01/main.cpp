/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:51:12 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 11:27:26 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    Contact		ct;
    PhoneBook	ph;
    std::string	choice;
	int			index;
	
	index = 0;
	
    std::cout<<"\033[31m ****************************************************************************"<<std::endl<<std::endl;
    std::cout <<"*  The Operations that you are able to implement on this program are :      *"<<std::endl;
    std::cout <<"*  ADD   : Allow you to add new member to the phone book                    *"<<std::endl;
    std::cout <<"*  SEARCH: Display the saved contacts as a list                             *"<<std::endl;
    std::cout <<"*  EXIT  : Exit from the whole prg                                          *"<<std::endl<<std::endl;;
    std::cout<<"****************************************************************************\033[0m"<<std::endl<<std::endl<<std::endl;;
    
    while (1)
    {
        std::cout<<"\033[92mPlease choose one of the choices above ***\033[0m \n";  
        std::getline(std::cin, choice);
        if(std::cin.eof())
            exit(1);
        if (choice.compare("ADD") == 0)
			add(&ph, &ct, &index);
        else  if(choice.compare("SEARCH") == 0)
			searching(ph, index);
        else if(choice.compare("EXIT") == 0)
        {
            std::cout<<"\033[31m GOOD BYE \033[0m"<<std::endl;
            break;
        }
    }
    return (0);
}