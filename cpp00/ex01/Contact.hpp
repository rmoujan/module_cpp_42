/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:43:56 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/03 14:31:34 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_H
#define Contact_H

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include <stdlib.h>
//in header file we just declare the class with 
//variables and its prototypes of its functions
class Contact{
    
    //attributes:
    private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    int phone_number;
    std::string darkest_secret;
    public:
    void ini(std::string f, std::string l, std::string nm, int n, std::string d);//ini fct
    void display();
    std::string getFn();
    std::string getLn();
    std::string getNn();
    int getPn();
    std::string getDs();
    // ~ Contact();//destructor
};

#endif