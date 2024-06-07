#include<iostream>  
using namespace std;  
int main()  
{  
    int N,digit,reverse=0,temp;    
      temp=N;
    while(temp!=0)
    {
        digit=temp%10;
        reverse=reverse*10+digit;
        temp/=10;
    }; 
    if(N==reverse)
    {
        cout<<N<<"is Palindrome";
    }
    else
    {
        cout<<N<<"is not a Palindrome";
}
return 0;
}
