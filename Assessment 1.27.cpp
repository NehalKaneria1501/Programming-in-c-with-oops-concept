#include<iostream>
using namespace std;
int main ()
{
    int num,sum=0;
    num=1234;
    cout <<"The number is:\n"<<num; 
    while(num!=0)
	{
        sum+=num%10;
        num=num/10;
    }
    cout<<"Sum of digits:\n"<<sum;
    return 0;
}
