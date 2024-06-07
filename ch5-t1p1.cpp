#include <iostream>
using namespace std;
class Arithmetic 
{
public:
    virtual float calculate()=0;
};
class Calculator : public Arithmetic 
{
private:
    float result;
public:
    Calculator(float a, float b) 
	{
        result = a / b;
    }
    Calculator(float a, float b, float c) 
	{
        result=a-b-c;
    }
    Calculator(float a, float b, float c, float d) 
	{
        result=a*b*c*d;
    }
    Calculator(float a,float b,float c,float d,float e) 
	{
        result = a + b + c + d + e;
    }
    float calculate() 
	{
        return result;
    }
};
int main()
 {
    Calculator div(10,2);
    cout<<"Division:"<<div.calculate()<<endl;
    Calculator sub(20,5,3);
    cout<<"Subtraction:"<<sub.calculate()<<endl;
    Calculator mul(2,3,4,5);
    cout<<"Multiplication:"<<mul.calculate()<<endl;
    Calculator add(1,2,3,4,5);
    cout<<"Addition:"<<add.calculate()<<endl;
    return 0;
}
