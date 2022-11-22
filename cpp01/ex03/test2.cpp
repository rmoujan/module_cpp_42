#include <iostream>
using namespace std;

class B{
  
  public:
  string type;
  B()
  {

  }
  B(string value)
  {
    type = value;
  }
 string getType()
  {
    return type;
  }
  void update(string *value)
  {
    // type = value;
    *value = "reshe";
  }
};


// class A{
  
//   public:
//   B obj;
//   A()
//   {

//   }
//   A(B &b)
//   {
//     obj = b;
//   }
//   void affiche()
//   {
//     cout<<"type is "<<obj.getType()<<endl;
//   }
// };

int main() {
string name = "hallo";
  B obj("mac book");
  // A aobj(obj);
// cout<<obj.getType()<<endl;
cout<<name<<endl;
obj.update(&name);
cout<<name<<endl;
  return 0;
}