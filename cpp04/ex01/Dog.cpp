/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:23:42 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/20 18:16:27 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[34mDefault Constructor of Dog has been invoked \033[0m"<<std::endl;
    this->type = "Dog";
    this->b = new Brain();
}

Dog :: Dog(const Dog &ref)
{
     std::cout << "\033[34mCopy Constructor of Dog has been invoked \033[0m"<<std::endl;
     *this= ref;
}

Dog& Dog :: operator= (const Dog &ref)
{
     std::cout << "\033[92mcopy Assignement of Dog has been invoked \033[0m"<<std::endl;
     if (this == &ref)
          return *this;
     this->type = ref.type;
     if (ref.b)
     {
          this->b = new Brain();
          this->b->operator=(*ref.b);
     }
     else
          this->b = nullptr;
     return (*this);
}

Dog :: ~Dog()
{
     std::cout << "\033[34mDestructor of Dog has been invoked \033[0m"<<std::endl;
     delete this->b;
}

void Dog :: makeSound()const
{
    std::cout << "\033[34mhaw haw \033[0m"<<std::endl;
}