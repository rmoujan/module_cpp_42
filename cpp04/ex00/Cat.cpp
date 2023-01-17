/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:22:43 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/17 10:49:06 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "\033[92mDefault Constructor of Cat has been invoked \033[0m"<<std::endl;
    this->type = "Cat";
}

Cat :: Cat(const Cat &ref)
{
     std::cout << "\033[92mCopy Constructor of Cat has been invoked\033[0m"<<std::endl;
     *this= ref;
}

Cat& Cat :: operator= (const Cat &ref)
{
     std::cout << "\033[92mcopy Assignement of Cat has been invoked \033[0m"<<std::endl;
     this->type = ref.type;
     return (*this);
}

Cat :: ~Cat()
{
     std::cout << "\033[92mDestructor of Cat has been invoked \033[0m"<<std::endl;
}

const void Cat :: makeSound()
{
    std::cout << "\033[92mmiw miw \033[0m"<<std::endl;
}