#include <iostream>
using namespace std; 
int main() 
{
    int i,n,sum = 0;
    cout<<"Display n terms of even natural number and their sum:\n";
    cout<<"Input number of terms:";
    cin>>n;
    cout<<"The even numbers are:\n";
    for(i=1;i<=n;i++) 
    {
        cout<<2*i<<""; 
        sum+=2*i;
    }
    cout<<"The Sum of even Natural Numbers up to\n"<<n<<"terms:"<<sum<<endl;
    return 0;
}
