#include<iostream>
using namespace std;
int main()
{
	double feet,inches,heightinCm;
	cout<<"Enter your height in feet and inches"<<endl;
	cout<<"Feet=";
	cin>>feet;
	cout<<"Inches=";
	cin>>inches;
	heightinCm=(feet*12+inches)+2.54;
	cout<<"Your height="<<heightinCm<<"centimeter"<<endl;
	return 0;
}
