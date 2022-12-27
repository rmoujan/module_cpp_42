/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_copyconst.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:22:17 by rmoujan           #+#    #+#             */
/*   Updated: 2022/12/27 12:35:01 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>  
using namespace std;  
class Opp { 
    public:
 int a;  
 int b; 
 int *z;  
 public: Opp() { 
   z = new int; 
 } 
 void input(int x, int y, int l) { 
    a=x;  
    b=y;  
    *z=l;  
 } 
 void display() { 
 cout<<"value of a:" <<a<<endl;  
 cout<<"value of b:" <<b<<endl;  
 cout<<"value of z:" <<*z<<endl;  
 } 
}; 
 
int main()  {  
 Opp obj1;  
 obj1.input(4,8,12);  
 Opp obj2 = obj1;  
// obj1.a = 1000;
// obj1.b = 1111;
 obj2.display();
 *(obj1.z) = 2222;
 obj2.display();
// cout<<"addres is OBJ1 |"<<&obj1<<"|"<<endl;
// cout<<"addres is OBJ2 |"<<&obj2<<"|"<<endl;
 return 0;  
} 