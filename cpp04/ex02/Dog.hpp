/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:23:45 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/19 13:36:16 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

    Brain *b;
    public:
    Dog();
    Dog(const Dog &ref);
    Dog& operator=(const Dog &ref);
    ~Dog();
    virtual void makeSound() const;

};


#endif