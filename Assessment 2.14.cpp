#include<iostream>
using namespace std;
float calculate_tax(float income)
 {
    float tax=0;
    if(income<=250000) 
	{
        tax=0;
    } else if(income<=500000) 
	{
        tax=(income-250000)*0.05;
    } 
	else if(income<=1000000)
	 {
        tax=12500+(income-500000)*0.2;
    } 
	else
	 {
        tax=112500+(income-1000000)*0.3;
    }
    return tax;
}
int main() 
{
    float income;
    cout<<"Enter the annual income:";
    cin>>income;
    if(cin.fail()||income<0) 
	{
        cout<<"Please enter a valid numeric value for income."<<endl;
        return 1;
    }
    float tax=calculate_tax(income);
    cout<<"Income Tax:Rs."<<tax<<endl;
    return 0;
}

