#include<iostream>
using namespace std;
int main()
{
	char i,j,k,special,number;
	cout<<"Enter character:";
	cin>>number;
	for(i=0;i<50;i++)
	{
		if(number==i)
		{
			cout<<"Character is Uppercase";
		}
	}
	for(j=65;j<91;j++)
	{
		if(number==j)
		{
			cout<<"Character is Lowercase";
		}
	}
	for(k=97;k<122;k++)
	{
		if(number==k)
		{
			cout<<"Value is Special";
		}
	}
	return 0;
}
