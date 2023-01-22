/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:05:16 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 09:08:59 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[92mDefault Constructor of Brain has been invoked \033[0m"<<std::endl;
    this->ideas = new std::string[100];
}

Brain :: Brain(const Brain &ref)
{
     std::cout << "\033[92mCopy Constructor of Brain has been invoked\033[0m"<<std::endl;
     *this= ref;
}

Brain& Brain :: operator= (const Brain &ref)
{
     std::cout << "\033[92mcopy Assignement of Brain has been invoked \033[0m"<<std::endl;
      // self-assignment guard, to prevent from copying the object itself
      if (this == &ref)
            return *this;
     if (ideas)
          delete []ideas;
     if (ref.ideas)
     {
          this->ideas = new std::string[100];
          for (int i = 0; i<100 ; i++)
               this->ideas[i] = ref.ideas[i];
     }
     else
          this->ideas = nullptr;
     return (*this);
}

Brain :: ~Brain()
{
     std::cout << "\033[92mDestructor of Brain has been invoked \033[0m"<<std::endl;
     delete []ideas;

}
// std::string Brain :: getIdeas()const{
//      return this->ideas;
// } 
// void Brain :: setIdeas(std::string value)
// {

//      // std::strcpy(this->ideas,value); 
// }
 