#include<iostream>
using namespace std;
class x 
{
public: 
    x() 
	{
        cout << "Enter the member of x" << endl;
    }   
};
class a: public x 
{
public:
    a() 
	{
        cout<< "Enter the value of a"<<endl;
    }   
};
class b:public x 
{
public:
    b() 
	{
        cout<<"Enter the value of b"<<endl;
    }
};
class c:public x 
{
public:
    c() 
	{
        cout<<"Enter the value of c"<<endl;
    }
};
class y 
{
private:
    int a, b, c;
public:
    void setData(int a, int b, int c)
	 {
        this->a=a;
        this->b=b;
        this->c=c; 
    }
    void getData() 
	{
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        cout<<"c "<<c<<endl;
    }
    int sumofcube() 
	{
        return a*a*a + b*b*b + c*c*c;
    }
};
int main()
{
    a obja;
    b objb;
    c objc;
    int a,b,c;
    cout<<"Enter the values of a, b, and c:";
    cin>>a>>b>>c;
    y sum;
    sum.setData(a,b,c);
    int sumofcubes=sum.sumofcube();
    cout<<"Sum of the cubes of the three numbers="<<sumofcubes<<endl;
    return 0;
}
