/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:23:59 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/03 14:31:12 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
//this will not contain dok les fctes , n9der n7taj setters getters constructor and so on !!

//ini func:
void Contact :: ini(std::string f, std::string l, std::string nm, int n, std::string d)
{
    first_name = f;
    last_name = l;
    nick_name = nm;
    phone_number = n;
    darkest_secret =d;
    std::cout << "Contact had been initialized"<<std::endl;
}
void Contact :: display()
{
    std::cout << "OUTPUT FROM DISPLAY'CONTACT"<<std::endl;
    std::cout<<"First Name is"<<first_name<<std::endl;
    std::cout<<"Last Name is"<<last_name<<std::endl;
    std::cout<<"Nick Name is"<<nick_name<<std::endl;
    std::cout<<"Number Phone is"<<phone_number<<std::endl;
    std::cout<<"Darkest Secret is"<<darkest_secret<<std::endl;

}
std::string Contact ::getFn()
{
    return first_name;
}

std::string Contact ::getLn()
{
    return last_name;
}

std::string Contact ::getNn()
{
    return nick_name;
}

int Contact ::getPn()
{
    return phone_number;
}

std::string Contact ::getDs()
{
    return darkest_secret;
}