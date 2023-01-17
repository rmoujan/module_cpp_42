/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:11 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/17 10:51:37 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    
    const  Animal* meta = new Animal(); 
    const Animal* j = new Dog();
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
    delete j ;
    delete meta;
    return (0); 
}