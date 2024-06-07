#include<iostream>
#include<string>
using namespace std;
class Message 
{
private:
    string internalMessage;
public:
    Message(const string & msg="Default Message"):internalMessage(msg) 
	{
	}
    void print() 
	{
        cout<<"Internal Message:"<<internalMessage<<endl;
    }
    void print(const string & additionalMsg) 
	{
        cout<<"Internal Message:"<<internalMessage<<""<<additionalMsg<<endl;
    }
};
int main() 
{
    Message msg1;
    msg1.print(); 
    Message msg2("Hello,World!");
    msg2.print(); 
    msg2.print("Welcome to the C++ world");
    return 0;
}
