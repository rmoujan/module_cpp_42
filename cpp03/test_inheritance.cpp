/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_inheritance.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:05:25 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/10 16:53:38 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// class Parent{
//     protected:
//     std::string name;
//     int points;
//     public:
//     Parent(){
//         std::cout << "Default constructor of Parent has been invoked"<<std::endl;
//     }
//     // // Parent(std::string value, int number){
        
//     // //     name = value;
//     // //     points = number;
//     // //     std::cout << "Constructor of Parent has been invoked"<<std::endl;
//     // // }
//     ~Parent()
//     {
//         std::cout << "Destructor of Parent has been invoked"<<std::endl;
//     }
//     void print()
//     {
//         std::cout<<"HALLO AUS PARENT CLASS"<<std::endl;
//     }
    
// };

// class Child : public Parent{

//     public:

//     Child(){
//         std::cout << "Default constructor of Child has been invoked"<<std::endl;
//     }
//     ~Child()
//     {
//         std::cout << "Destructor of Child has been invoked"<<std::endl;
//     }
    
//     void print()
//     {
//         std::cout<<"HALLO AUS CHILD CLASS"<<std::endl;
//     }
    
// };

// int main()
// {
//     // Parent obj("Reshe", 100);
//     // obj.print();
//     Child c;
//     // c.Parent::print();
//     return (0);
// }

class Base
{
public:
    int m_id {};

    Base(int id=0)
        : m_id{ id }
    {
        
std::cout << "Default constructor of Base has been invoked"<<std::endl;
    }

    int getId() const { return m_id; }
};

class Derived: public Base
{
public:
    double m_cost {};

    Derived(double cost=0.0)
        : m_cost{ cost }
    {
        std::cout << "Default constructor of Derived has been invoked"<<std::endl;
    }

    double getCost() const { return m_cost; }
};

int main()
{
    Derived d(10.10);
}