#include<iostream>
using namespace std;
 int main()
	{
		int op;
		float num1,num2;
		cout<<"Enter two numbers:"<<endl;
		cin>>num1>>num2;
		cout<<"What do you want to perform?(+,-,*,/):"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:cout<<"Addition is:"<<num1+num2<<endl;
			break;
			case 2:cout<<"Substraction is:"<<num1-num2<<endl;
			break;
			case 3:cout<<"Multiplication is:"<<num1*num2<<endl;
			break;
			case 4:cout<<"Division is:"<<num1/num2<<endl;
			break;
			default:cout<<"Invalid entry"<<endl;
			break;
		}
		return 0;  
	}
