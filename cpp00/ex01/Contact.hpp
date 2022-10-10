/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:43:56 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/10 18:18:30 by rmoujan          ###   ########.fr       */
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
    
    private:
    
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string darkest_secret;
    std::string  phone_number;
    
    public:
    
    void ini(std::string f, std::string l, std::string nm, std::string  n, std::string d);

    std::string getFn();
    std::string getLn();
    std::string getNn();
    std::string getDs();
    std::string getPn();
};

#endif