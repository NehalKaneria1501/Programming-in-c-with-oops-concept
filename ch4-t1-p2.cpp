#include <iostream>
using namespace std;
class p 
{
protected:
    float temperature;
public:
    void setTemperature(float temp)
	 {
        temperature=temp;
    }
};
class q:public p 
{
public:
    float tofahrenheit() 
	{
        return(temperature*9.0/5.0)+32.0;
    }
};
class r:public q 
{
public:
    float tokelvin() 
	{
        return(tofahrenheit()+459.67)*5.0/9.0;
    }
};
int main() 
{
    r obj;
    float celsius;
    cout<<"Enter temperature in celsius:";
    cin>>celsius;
    obj.setTemperature(celsius);
    float fahrenheit=obj.setTemperature();
    float kelvin=obj.tokelvin();
    cout<<"Temperature in fahrenheit:"<<fahrenheit<<endl;
    cout<<"Temperature in kelvin:"<<kelvin<<endl;
    return 0;
}
