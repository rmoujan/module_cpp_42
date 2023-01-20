/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:22:43 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/20 15:32:20 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
Cat::Cat()
{
    std::cout << "\033[92mDefault Constructor of Cat has been invoked \033[0m"<<std::endl;
    this->type = "Cat";
    this->b = new Brain();
}

Cat :: Cat(const Cat &ref)
{
     std::cout << "\033[92mCopy Constructor of Cat has been invoked\033[0m"<<std::endl;
     *this= ref;
}

Cat& Cat :: operator= (const Cat &ref)
{
     std::cout << "\033[92mcopy Assignement of Cat has been invoked \033[0m"<<std::endl;
     if (this == &ref)
          return *this;
     this->type = ref.type;
     if (ref.b)
     {
          this->b = new Brain();
          std::cout <<" ===== "<<std::endl;
          this->b = ref.b;
     }
     else
          this->b = nullptr;
     return (*this);
}

Cat :: ~Cat()
{
     std::cout << "\033[92mDestructor of Cat has been invoked \033[0m"<<std::endl;
     if (this->b)
     {
          
          this->b->~Brain();
          delete this->b;
     }
}

void Cat :: makeSound()const
{
    std::cout << "\033[92mmiw miw \033[0m"<<std::endl;
}