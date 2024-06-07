#include <iostream>
using namespace std;
int main() 
{
    int i,n;
    long factorial=1.0;
    cout<<"Enter a positive integer:";
    cin>>n;
    if(n<0)
    {
        cout<<"Error!Factorial of a negative number doesn't exist.";
    }
    else 
	{
        for(i=1;i<=n;++i)
		 {
            factorial*= i;
        }
        cout<<"Factorial of"<<n<<"="<<factorial;    
    }
    return 0;
}
