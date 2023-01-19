/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:11 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/19 13:30:50 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    
    const Animal* meta = new Animal();
    std::cout << "====== " << std::endl;
    const Animal* j = new Dog();
    std::cout << "====== " << std::endl;
    const Animal* i = new Cat();

    std::cout << std::endl;
    std::cout << meta->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 
    std::cout << j->getType() << " " << std::endl;
    
    std::cout << std::endl;
    
    meta->makeSound();
    i->makeSound(); //will output the cat sound! j->makeSound();
    j->makeSound();
    
    std::cout << std::endl;

    delete i;
    std::cout << "====== " << std::endl;
    delete j ;
    std::cout << "====== " << std::endl;
    delete meta;
    // why destructor of animal in this 3 delete was invoked !!!!!!
    //must set detructor of CAT and DOG with virtual keyword  !!!!
    return (0); 
}
