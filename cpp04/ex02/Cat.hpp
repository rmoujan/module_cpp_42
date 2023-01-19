/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:22:40 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/19 13:36:01 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"


class Cat : public Animal{
    
    Brain *b;
    public:
    Cat();
    Cat(const Cat &ref);
    Cat& operator=(const Cat &ref);
    ~Cat();
    virtual void makeSound()const;
};

#endif