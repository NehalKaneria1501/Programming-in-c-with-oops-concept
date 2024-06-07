#include <iostream>
using namespace std;
class Cricket 
{
public:
    virtual int getTotalOvers()
	 {
        return 50; 
    }
};
class T20Match:public Cricket 
{
public:
    int getTotalOvers() override 
	{
        return 20; 
    }
};
class TestMatch:public Cricket 
{
public:
    int getTotalOvers()override 
	{
        return 90; 
    }
};
int main() 
{
    Cricket*t20= new T20Match();
    Cricket*test=new TestMatch();
    cout<<"Total overs in T20 match:"<<t20->getTotalOvers()<<endl;
    cout<<"Total overs in Test match:"<<test->getTotalOvers()<<endl;
    delete t20;
    delete test;   
    return 0;
}
