#include <iostream>
using namespace std;
class Base 
{
public:
    void display()
	{
        cout<< "Display function in Base class"<<endl;
    }
};
class Derived1:virtual public Base
{
};
class Derived2:virtual public Base
{
};
class Derived:public Derived1,public Derived2
 {
};
int main() 
{
    Derived obj;
    obj.display();
    return 0;
}
