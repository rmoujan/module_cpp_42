/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:19:13 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/20 19:16:58 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "\033[31mDefault Constructor of Animal has been invoked \033[0m"<<std::endl;
    this->type = "Animal";
}

Animal :: Animal(const Animal &ref)
{
     std::cout << "\033[31mCopy Constructor of Animal has been invoked \033[0m"<<std::endl;
     *this= ref;
}

Animal& Animal :: operator= (const Animal &ref)
{
     std::cout << "\033[31mcopy Assignement of Animal has been invoked \033[0m"<<std::endl;
     this->type = ref.type;
     return (*this);
}

Animal :: ~Animal()
{
     std::cout << "\033[31mDestructor of Animal has been invoked \033[0m"<<std::endl;
}

// void Animal :: makeSound()const
// {
//     std::cout << "\033[31mTHERE IS NO SOUND \033[0m"<<std::endl;
// }

std::string Animal :: getType()const
{
    return (this->type);
}

void Animal :: setType(std::string value)
{
    this->type = value;
}