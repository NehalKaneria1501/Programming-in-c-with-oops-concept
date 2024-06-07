#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b,c; 
    float average; 
    cout<<"Enter the first number:"; 
    cin>>a;
    cout<<"Enter the second number:"; 
    cin>>b;
    cout<<"Enter the second number:"; 
    cin>>c;
    float sum=a+b+c; 
    average=sum/3;
    cout<<"Sum of the three numbers:"<<sum<<endl; 
    cout<<"Average of the three numbers:"<<average<<endl; 
    return 0;
}
