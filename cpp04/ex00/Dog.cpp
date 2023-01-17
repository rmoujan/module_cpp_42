/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:23:42 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/17 09:57:31 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constructor of Dog hs been invoked "<<std::endl;
    this->type = "Dog";
}

Dog :: Dog(const Dog &ref)
{
     std::cout << "Copy Constructor of Dog hs been invoked "<<std::endl;
     *this= ref;
}

Dog& Dog :: operator= (const Dog &ref)
{
     std::cout << "copy Assignement of Dog hs been invoked "<<std::endl;
     this->type = ref.type;
}

Dog :: ~Dog()
{
     std::cout << "Destructor of Dog hs been invoked "<<std::endl;
}

void Dog :: makeSound()
{
    std::cout << "haw haw "<<std::endl;
}