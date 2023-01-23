/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_poly2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:19:37 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 09:28:37 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
using namespace std;

class Test{
  
  public:
  int a;
  Test(){
    cout <<"default const Test"<<endl;
  }
  Test(int value)
  {
    this->a = value;
    cout <<"default const Test"<<endl;
  }
};

class Child : public Test{
    public:
    Child(int a):Test(a)
    {
        cout <<"default const child"<<endl;   
        // this->a = a;     
   }
};
//NOTE :how to call the const by parameter inside child class !!!
// ==>I think f7al haka, donk darori kat overdih f derived class !!!
int main()
{
    Test t(5);
    Child c(18);
    cout<<"CHILD ===   "<<c.a<<endl;
    cout<<"PARENT === "<<t.a<<endl;
}