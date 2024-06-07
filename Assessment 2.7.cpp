#include<iostream>
using namespace std;
float CalculateArea(float radius)
{
    return 3.1416 * radius * radius;
}
float CalculateCircumference(float radius)
{
    return 2*3.1416*radius;
}
int main() 
{
    float radius;
    char choice;
    do 
	{
        cout<<"Please enter the radius of a circle:";
        cin>>radius;
        float area=CalculateArea(radius);
        float circumference=CalculateCircumference(radius);
        cout<<"Area and Circumference of a Circle\n";
        cout<<"Radius="<<radius<<"\t\n";
        cout<<"Area="<<area<<"\t\n";
        cout<<"Circumference=\t"<<circumference<<"\n";
        cout<<"Do you want to continue(y/n)?\n";
        cin>>choice;
    } 
	while(choice=='y'||choice=='Y');
    cout<<"Thank you for using the Circle Calculator!\n";
    return 0;
}
