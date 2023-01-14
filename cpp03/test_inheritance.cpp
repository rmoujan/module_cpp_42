/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_inheritance.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:05:25 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/14 12:14:52 by rmoujan          ###   ########.fr       */
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

// class Base
// {
// protected:
//     int a;
//     std::string field;
// public:
//     Base()
//     {
//         std::cout<<"Base default \n";
//     }
//     Base(int x, std::string ff)
//     {
//         a = x;
//         field = ff;
//         std::cout<<"Base parameter \n";
//     }
//     void display()
//     {
//         std::cout<< "age is "<<a<<" and Field is "<< field<<std::endl;
//     }
// };

// class Derived: public Base
// {
//     private:
//             std::string name;
//     public:
//             Derived()
//             {
//                 // Base(10);
//                 std::cout<<"Derived default \n";
//             }
//             Derived(int aa, std::string value, std::string ff):Base(aa, ff)//calling the base constructor to initialize the inherit member variables
//             {
//                 name = value;
//                 std::cout<<"Derived parameter \n";
//             }
//             int getId()
//             {
//                 return a;
//             }
//             std::string getName()
//             {
//                 return name;
//             }
//             std::string getField()
//             {
//                 return field;
//             }
//             void display()
//             {
//                 Base::display();//call to the dispaly that inside base class
//                 std::cout << "Name is "<<name<<std::endl;
//             }
//         //     double m_cost {};

//         //     Derived(double cost=0.0)
//         //         : m_cost{ cost }
//         //     {
//         //         std::cout << "Default constructor of Derived has been invoked"<<std::endl;
//         //     }

//         //     double getCost() const { return m_cost; }
// };

// int main()
// {
//     Derived d(10, "Reshe", "IT");
//     d.display();
//     // std::cout << " a is " << d.getId();
//     // std::cout << " name is " << d.getName();
//     // std::cout << " field is " << d.getField();
// }


// Let’s implement our Fruit example that we talked about in our introduction to inheritance. 
// Create a Fruit base class that contains two private members: a name (std::string),
// and a color (std::string). Create an Apple class that inherits Fruit. 
// Apple should have an additional private member: fiber (double). 
// Create a Banana class that also inherits Fruit. Banana has no additional members.


// class Fruit{
//     private:
//     std::string name;
//     std::string color;
//     public:
//     Fruit(std::string const n,  std::string const c)
//     {
//         name = n ;
//         color = c;
//     }
//     std::string getName()const
//     {
//         return (name);
//     }
//     std::string getColor()const 
//     {
//         return (color);
//     }
// };
// class Apple : public Fruit{
//     private:
//     double fiber;
//     public:
//     Apple(std::string const v_name,  std::string const v_color, const double f):Fruit(v_name, v_color){
//         fiber = f;
//     }
//     double getFiber()const 
//     {
//         return (fiber);
//     }
//     // std::ostream& operator<<(std::ostream& COUT, const Apple& obj)
// };
// std::ostream& operator<<(std::ostream& COUT, const Apple& obj)
// {
//     COUT<<obj.getName()<<std::endl;
//     COUT<<obj.getColor()<<std::endl;
//     COUT<<obj.getFiber()<<std::endl;
//     return COUT;
// }


// class Banana : public Fruit{
// };

// #include <iostream>

// int main()
// {
// 	const Apple a("Red delicious", "red", 4.2 );
// 	std::cout << a << '\n';

// 	// const Banana b{ "Cavendish", "yellow" };
// 	// std::cout << b << '\n';

// 	return 0;
// }

#include <iostream>
using namespace std;

class A {
  public:
    A() {
        cout << "Constructor A\n";
    }
    void display() {
      cout << "Hello form Class A \n";
    }
};

class B:  virtual public A {
     public:
        B() {
         cout << "Constructor B\n";
    }

};

class C:  virtual public A {
     public:
        C() {
         cout << "Constructor C\n";
    }

};

class D: public B, public C {
};

int main() {
  D object;
   object.display();
}