/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:05:16 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/19 14:51:08 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[92mDefault Constructor of Brain has been invoked \033[0m"<<std::endl;
}

Brain :: Brain(const Brain &ref)
{
     std::cout << "\033[92mCopy Constructor of Brain has been invoked\033[0m"<<std::endl;
     *this= ref;
}

Brain& Brain :: operator= (const Brain &ref)
{
     std::cout << "\033[92mcopy Assignement of Brain has been invoked \033[0m"<<std::endl;
     // this->ideas = ref.ideas;????????
     return (*this);
}

Brain :: ~Brain()
{
     std::cout << "\033[92mDestructor of Brain has been invoked \033[0m"<<std::endl;
}
