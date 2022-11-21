
#include <iostream>
using namespace std;
 
class change{
    public:
    int name;
    change()
    {
        cout<<"objet created"<<endl;
    }
    change(int value)
    {
        name = value;
        cout<<"objet created"<<endl;
    }
    void update(int &value)
    {
        name = value;
    }
    int getName()
    {
        return name;
    }

};
int main()
{
    int name = 10;
    change obj(0);
    cout<<obj.getName()<<endl;
    obj.update(name);
    cout<<obj.getName();
}