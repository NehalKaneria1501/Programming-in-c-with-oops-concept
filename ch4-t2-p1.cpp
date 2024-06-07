#include<iostream>
using namespace std;
class RBI 
{
public:
	double rate;
    RBI(double rate):rate(rate) 
	{
	}
    double getROI(double amount) 
	{
        return amount*rate;
    }
    void a() 
	{
        cout<<"Enter the amount of interest rate of RBI="<< endl;
    }
};
class AXIS:public RBI 
{
public:
    AXIS(double rate):RBI(rate) 
	{
	}
    void b() 
	{
        cout<<"Enter the amount of interest rate of AXIS Bank="<<endl;
    }
};
class CIBC :public RBI 
{
public:
    CIBC(double rate):RBI(rate) 
	{
	}
    void c() 
	{
        cout<<"Enter the amount of interest rate of CIBC Bank="<<endl;
    }
};
class SCOTIA :public RBI 
{
public:
    SCOTIA(double rate):RBI(rate) 
	{
	}
    void d() 
	{
        cout<<"Enter the amount of interest rate of SCOTIA Bank="<<endl;
    }
};
int main() 
{
    double rbiRate=0.25;
    double axisRate=0.50;
    double cibcRate=0.75;
    double scotiaRate=1.00;
    RBI b1(rbiRate);
    AXIS b2(axisRate);
    CIBC b3(cibcRate);
    SCOTIA b4(scotiaRate);
    b1.a();
    b2.b();
    b3.c();
    b4.d();
    cout<<"ROI for AXIS Bank:"<<b2.getROI(1000)<<endl;
    cout<<"ROI for CIBC Bank:"<<b3.getROI(1000)<<endl;
    cout<<"ROI for SCOTIA Bank:"<<b4.getROI(1000)<<endl;
    return 0;
}
