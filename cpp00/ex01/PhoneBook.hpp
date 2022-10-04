/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:18:53 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/03 12:17:50 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_H
#define PhoneBook_H

#include <iostream>
#include <string.h>
#include <iomanip>
#include "Contact.hpp"
#include <stdlib.h>
//in header file we just declare the class with 
//variables and its prototypes of its functions

class PhoneBook{
    private:
    Contact obj[8];
    public:
    // PhoneBook();//constructor
    void add(Contact ct_obj, PhoneBook *ph, int index);
    void search(PhoneBook ph, int index, int searched);
    void display(PhoneBook ph, int index);
};
void add(PhoneBook *ph, Contact *ct, int *index);
void searching(PhoneBook ph, int index);


#endif