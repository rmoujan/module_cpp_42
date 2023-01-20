/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_poly.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:03:33 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/20 09:10:39 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Animal{

    protected:
    std::string type;
    std::string sound;
    public:
    Animal()
    {
    std::cout << "\033[31mDefault Constructor of Animal has been invoked \033[0m"<<std::endl;
    this->type = "Animal";
    this->sound = "NO SOUNDS";
    }
    ~Animal()
    {
     std::cout << "\033[31mDestructor of Animal has been invoked \033[0m"<<std::endl;
    }
      void  makeSound()const
{
    std::cout << "\033[31mTHERE IS NO SOUND \033[0m"<<std::endl;
}
    // // void makeSound();
     std::string getType()const{
        return type;
     }
     void output()
     {
        std::cout <<"BASE CLASS ANS SOUND IS "<<this->sound<<std::endl;
     }
    // void setType(std::string value);
};

class Cat : public Animal{
    
    public:
   Cat()
{
    std::cout << "\033[92mDefault Constructor of Cat has been invoked \033[0m"<<std::endl;
    this->type = "Cat";
    this->sound = "MIW MIW";
}
   ~Cat()
{
     std::cout << "\033[92mDestructor of Cat has been invoked \033[0m"<<std::endl;
}
    void makeSound()const
{
    std::cout << "\033[92m miw miw \033[0m"<<std::endl;
}
     void output()
     {
        std::cout <<"CHILD CLASS AND SOUND IS "<<this->sound<<std::endl;
     }
};

//why destructor of Cat does not invoked !!!!

int main()
{
    // Animal *d = new Animal();
    // std::cout<<std::endl;
    // d->output();
    // // std::cout <<"Type is " <<d->output()<<std::endl;
    // d = new Cat();
    //  d->output();
    // std::cout<<std::endl;
    // std::cout <<"Type is " <<d->output()<<std::endl;
    // delete c;
    // delete d;
    std::string data[5]={"reshe", "faty", "nina", "ali", "hhh"};
    int i = 0;
    while (i < 5)
    {
        std::cout << "Data is "<<data[i]<<std::endl;
        i++;
    }
    std::string halo[5];
    halo = data;
    return (0);
}