/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_operator.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:27:26 by rmoujan           #+#    #+#             */
/*   Updated: 2022/12/27 10:04:35 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Overtest{


    public:
    int number;
    Overtest(int a);
    // Overtest operator ++ (int);
    ~Overtest();
};

Overtest::Overtest(int a)
{
    std::cout<<"default constructor called"<<std::endl;
    this->number = a;
}
Overtest:: ~Overtest()
{
    std::cout<<"Destructor called"<<std::endl;
}

// Overtest Overtest :: operator ++ (int)
// {
//     this->number++;
//     return *this;
// }


int main()
{
    Overtest obj(10);
    std:: cout << "value is "<<obj.number<<std::endl; 
     Overtest obj2(obj);
    std:: cout << "value is "<<obj2.number<<std::endl; 
    // obj++;
    // std:: cout << "value is "<<obj.number<<std::endl;
    // obj++;
    // std:: cout << "value is "<<obj.number<<std::endl;
    // obj++;
    // std:: cout << "value is "<<obj.number<<std::endl;
    // obj++;
    // std:: cout << "value is "<<obj.number<<std::endl;
}