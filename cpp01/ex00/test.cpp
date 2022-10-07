/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:06:35 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/07 12:40:46 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

// class test{
//     public:
//     string name;
//     test()
//     {
//         cout<<"constructor without parameter is invoked"<<endl;
//     }
//     test(string n)
//     {
//         name = n;
//         cout<<"constructor with parameter is invoked"<<endl;
//     }
//     test(const test &t)
//     {
//         name =t.name;
//          cout<<"copy constructor is invoked"<<endl;
//     }
//     void display()
//     {
//         cout << "my name is    "<<name<<endl;
//     }
//     ~test()
//     {
//         cout<<"destructor without parameter is invoked"<<endl;
//     }
// };
class Zombie{
      public:
	  std::string name;
	  public:
	  Zombie();//const
	  ~Zombie();//destr
	  void announce(void);
	  std::string getName(void);
	  void setName(std::string n);
	  Zombie* newZombie(std::string name);
	  void randomChump( std::string name );
};



 Zombie*  newZombie(std::string name)
{
    Zombie *z = new Zombie();
    z->name = name;
    return (z);
}
int main()
{
    Zombie *z = newZombie("Reshe");
    cout<<z->name<<endl;
    // z->setName("Reshe");
    
    // test obj;
    // obj.name ="reshe";
    // obj.display();
    
    // test obj2("amal");
    // obj2.display();
    
    // test obj3(obj);//calling copy constructor
    // obj3.display();
    
    // test obj4 = obj2;//calling copy constructor
    // obj4.display();
    return 0;
}