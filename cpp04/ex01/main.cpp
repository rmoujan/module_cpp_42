/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:11 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/19 15:52:27 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
//what is the use of brain object in this example !!!!
int main() {
    
    const Animal* obj1 = new Dog();
    std::cout <<std::endl;
    const Animal* obj2 = new Dog();
    std::cout <<std::endl;
    const Animal* obj3 = new Dog();
    std::cout <<std::endl;
    const Animal* obj4 = new Cat();
    std::cout <<std::endl;
    const Animal* obj5 = new Cat();
    std::cout <<std::endl;
    const Animal* obj6 = new Cat();
    const Animal *obj7 = obj6;

    const  Animal *data[7]={obj6, obj3, obj2, obj5, obj4, obj1, obj7};
    // data[0] = obj1;
    // data[1] = obj2;
    // data[2] = obj3; 
    // data[3] = obj4;
    // data[4] = obj5;
    // data[5] = obj6;
    int i = 0;
    std::cout <<std::endl;
    while (i < 7)
        data[i++]->makeSound();
    i = 0;
    while (i < 7)
    {
       delete data[i];
       std::cout <<std::endl;
       i++; 
    }
    return (0); 
}