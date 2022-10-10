/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:23:59 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/10 18:18:02 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void Contact :: ini(std::string f, std::string l, std::string nm, std::string  n, std::string d)
{
    first_name = f;
    last_name = l;
    nick_name = nm;
    phone_number = n;
    darkest_secret =d;
    std::cout << "Contact has been initialized"<<std::endl;
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

std::string  Contact ::getPn()
{
    return phone_number;
}

std::string Contact ::getDs()
{
    return darkest_secret;
}