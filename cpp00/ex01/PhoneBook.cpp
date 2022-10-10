/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:23:17 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/10 18:19:30 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook:: add(Contact ct_obj, PhoneBook *ph, int index)
{
        if (index >= 0 && index <= 7)
        {
                (*ph).obj[index] = ct_obj;
        }
        else
        {
                (*ph).obj[0] = ct_obj;
        }
}

void PhoneBook :: display(PhoneBook ph, int index)
{
	std::string str1;
	std::string str2;
	std::string str3;
        int i;

        i = 0;
        if (index >= 8)
                index = 8;
		std::cout << std::right << std::setw(15) << "Index|" << std::right << std::setw(15) << "FirstName|" << std::right
         << std::setw(15)<< "LastName|" << std::right << std::setw(15) << "NickName|" << std::endl;
		std::cout << std::string(10*5 + 2*5, '-') << "\n";
        while (i < index)
        { 	if (ph.obj[i].getFn().length()>= 10)
				str1 = ph.obj[i].getFn().substr(0, 9) + ".";
			else
				str1 = ph.obj[i].getFn().substr(0, 9);
				
			if (ph.obj[i].getLn().length()>= 10)
				str2 = ph.obj[i].getLn().substr(0,9)+ ".";
			else
				str2 = ph.obj[i].getLn().substr(0,9);
				
			if (ph.obj[i].getNn().length() >= 10)
				str3 = ph.obj[i].getNn().substr(0, 9)+ ".";
			else
				str3 = ph.obj[i].getNn().substr(0, 9);
			
		std::cout << std::right<<std::setw(14)<<i + 1<<"|"<< std::right << std::setw(14)<<str1<<"|"<< std::right
        <<std::setw(14)<<str2<<"|"<< std::right << std::setw(14) <<str3<<"|"<< std::endl;
		std::cout<< std::string(10*5 + 2*5, '-') << "\n";
                i++;
        }

}

//display a specific Contact :
void PhoneBook:: search(PhoneBook ph, int index, int searched)
{
        if ((searched) >  index || searched <= 0 || searched >8)
                std::cout<<"The User does not exist"<<std::endl;
        else
        {
                std::cout<<"The Contact Information are "<<std::endl<<std::endl;
                std:: cout <<"First Name is     "<<ph.obj[searched - 1].getFn()<<std::endl;
                std:: cout <<"Last Name is      "<<ph.obj[searched - 1].getLn()<<std::endl;
                std:: cout <<"Nick Name is      "<<ph.obj[searched - 1].getNn()<<std::endl;
                std:: cout <<"Phone Number is   "<<ph.obj[searched - 1].getPn()<<std::endl;
                std:: cout <<"Darkest Secret is "<<ph.obj[searched - 1].getDs()<<std::endl<<std::endl;          
        }
}