/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:11 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/20 19:19:51 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

//what is the use of brain object in this example !!!!

void call()
{

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
    // const Animal *obj7(obj6);

    const  Animal *data[6]={obj6, obj3, obj2, obj5, obj4, obj1};
    int i = 0;
    std::cout <<std::endl;
    while (i < 6)
        data[i++]->makeSound();
    i = 0;
    std::cout <<std::endl;
    while (i < 6)
    {
       delete data[i];
       std::cout <<std::endl;
       i++; 
    }
}
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
    // const Animal *obj7(obj6);

    const  Animal *data[6]={obj6, obj3, obj2, obj5, obj4, obj1};
    int i = 0;
    std::cout <<std::endl;
    while (i < 6)
        data[i++]->makeSound();
    i = 0;
    std::cout <<std::endl;
    while (i < 6)
    {
       delete data[i];
       std::cout <<std::endl;
       i++; 
    }
    // const Animal *obj = new Animal(); u can't cus it is an abstract class
    return (0); 
}