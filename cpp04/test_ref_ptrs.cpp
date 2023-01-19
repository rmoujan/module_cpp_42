/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ref_ptrs.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:19:29 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/19 09:35:17 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Animal{

    protected:
    std::string type;
    
    public:
    Animal()
    {
    std::cout << "\033[31mDefault Constructor of Animal has been invoked \033[0m"<<std::endl;
    this->type = "Animal";
    }
    ~Animal()
    {
     std::cout << "\033[31mDestructor of Animal has been invoked \033[0m"<<std::endl;
    }
    virtual  void  makeSound()const
{
    std::cout << "\033[31mTHERE IS NO SOUND \033[0m"<<std::endl;
}
    // // void makeSound();
     std::string getType()const 
     {
        return "base";
     }
    // void setType(std::string value);
};

class Cat : public Animal{
    public:
    int number;
    public:
   Cat()
{
    std::cout << "\033[92mDefault Constructor of Cat has been invoked \033[0m"<<std::endl;
    this->type = "Cat";
}
Cat(int v)
{
    std::cout << "\033[92mDefault Constructor of Cat has been invoked \033[0m"<<std::endl;
    this->type = "Cat";
    this->number = v;
}
   ~Cat()
{
     std::cout << "\033[92mDestructor of Cat has been invoked \033[0m"<<std::endl;
}
    virtual void makeSound()const
{
    std::cout << "\033[92mmiw miw \033[0m"<<std::endl;
}
     std::string getType()const 
     {
        return "derived";
     }
};
// create a ref and ptr t points and ref to an existing object 
int main()
{
    Cat c(10);
    Cat &ref_c = c;
    Cat *ptr_c = &c;
    std::cout << "c has type "<<c.getType()<<" and value is "<<c.number<<std::endl;
    std::cout << "c has type "<<ref_c.getType()<<" and value is "<<ref_c.number<<std::endl;
    std::cout << "c has type "<<ptr_c->getType()<<" and value is "<<ptr_c->number<<std::endl;
    Animal *an = new Cat();
   


    return (0);
}