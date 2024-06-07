#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float calculate_emi(float principal,float rate,int months) 
{
    float r=rate/1200;
    float emi=(principal*r*pow(1+r,months))/(pow(1+r,months)-1);
    return emi;
}
int main() 
{
    float principal,rate;
    int months;
    cout<<"Enter the principal amount:";
    cin>>principal;
    cout<<"Enter the annual interest rate (in percentage):";
    cin>>rate;
    cout<<"Enter the loan period in months: ";
    cin>>months;
    if(cin.fail()||principal<=0||rate<=0||months<=0) 
	{
        cout<<"Please enter valid numeric values for principal,rate,and months."<<endl;
        return 1;
    }
    float emi=calculate_emi(principal,rate,months);
    cout<<fixed<<setprecision(2);
    cout<<"Monthly EMI: Rs."<<emi<<endl;
    return 0;
}
