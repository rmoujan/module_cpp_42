/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:16:11 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/20 18:47:42 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

//what is the use of brain object in this example !!!!
int main() {
    
    // Brain b;
    // Brain bb(b);//double free
    // std::cout << " 000000 "<<std::endl<<std::endl
    // //FIRST TEST ::
    // Cat c;
    // Cat d(c);
    // Cat e(d);
    // Cat g(e);
    // Cat f(g);
    // Cat l(f);
    // Cat m(l);
    // Cat n(m);
          
    // std::cout << " ****** "<<std::endl<<std::endl;
    // std::cout << " ****** "<<std::endl<<std::endl;
    // std::cout << " ****** "<<std::endl<<std::endl;
// std::string *data = new std::string[100];
// *data = "hallo";
// std::cout <<*data<<std::endl;
// *data = "test";
// std::cout<<*data;
// std::string *data1 = data;
// std::cout<<*data1;
// delete data[];
// delete data1;

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


    // const Animal* obj1 = new Dog();
    // std::cout <<std::endl;
    
    // const Animal* obj4 = new Cat();
    // const Animal* test(obj4);

    // delete obj4;
    // delete obj1;
    // delete test;

    return (0); 
}