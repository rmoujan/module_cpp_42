/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:25:59 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/05 09:51:58 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class test{
    public:
    string name;
    test()
    {
        cout<<"constructor without parameter is invoked"<<endl;
    }
    test(string n)
    {
        name = n;
        cout<<"constructor with parameter is invoked"<<endl;
    }
    test(const test &t)
    {
        name =t.name;
         cout<<"copy constructor is invoked"<<endl;
    }
    void display()
    {
        cout << "my name is    "<<name<<endl;
    }
    ~test()
    {
        cout<<"destructor without parameter is invoked"<<endl;
    }
      ~test()
    {
        cout<<"destructor without parameter is invoked"<<endl;
    }
};

int main()
{
    test obj;
    obj.name ="reshe";
    obj.display();
    
    test obj2("amal");
    obj2.display();
    
    test obj3(obj);//calling copy constructor
    obj3.display();
    
    test obj4 = obj2;//calling copy constructor
    obj4.display();
    return 0;
}