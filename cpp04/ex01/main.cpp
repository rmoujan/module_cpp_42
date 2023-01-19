/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:11 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/19 14:48:19 by rmoujan          ###   ########.fr       */
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

    const  Animal *data[6]={obj6, obj3, obj2, obj5, obj4, obj1};
    // data[0] = obj1;
    // data[1] = obj2;
    // data[2] = obj3; 
    // data[3] = obj4;
    // data[4] = obj5;
    // data[5] = obj6;
    int i = 0;
    std::cout <<std::endl;
    while (i < 6)
        data[i++]->makeSound();
    i = 0;
    while (i < 6)
    {
       delete data[i];
       std::cout <<std::endl;
       i++; 
    }
    return (0); 
}