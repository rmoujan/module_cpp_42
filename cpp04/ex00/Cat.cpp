/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:22:43 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/17 09:54:53 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Constructor of Cat hs been invoked "<<std::endl;
    this->type = "Cat";
}

Cat :: Cat(const Cat &ref)
{
     std::cout << "Copy Constructor of Cat hs been invoked "<<std::endl;
     *this= ref;
}

Cat& Cat :: operator= (const Cat &ref)
{
     std::cout << "copy Assignement of Cat hs been invoked "<<std::endl;
     this->type = ref.type;
}

Cat :: ~Cat()
{
     std::cout << "Destructor of Cat hs been invoked "<<std::endl;
}

void Cat :: makeSound()
{
    std::cout << "miw miw "<<std::endl;
}