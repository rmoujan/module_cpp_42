/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:19:29 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/19 13:29:41 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

    protected:
    std::string type;
    
    public:
    Animal();
    Animal(const Animal &ref);
    Animal& operator=(const Animal &ref);
    virtual ~Animal();
    virtual  void makeSound()const ;
    std::string getType()const;
    void setType(std::string value);
};



#endif