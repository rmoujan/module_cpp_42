/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:19:13 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/17 10:01:43 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor of Animal hs been invoked "<<std::endl;
    this->type = "Animal";
}

Animal :: Animal(const Animal &ref)
{
     std::cout << "Copy Constructor of Animal hs been invoked "<<std::endl;
     *this= ref;
}

Animal& Animal :: operator= (const Animal &ref)
{
     std::cout << "copy Assignement of Animal hs been invoked "<<std::endl;
     this->type = ref.type;
}

Animal :: ~Animal()
{
     std::cout << "Destructor of Animal hs been invoked "<<std::endl;
}

void Animal :: makeSound()
{
    std::cout << "miw miw "<<std::endl;
}

std::string Animal :: getType()const
{
    return (this->type);
}

void Animal :: setType(std::string value)
{
    this->type = value;
}