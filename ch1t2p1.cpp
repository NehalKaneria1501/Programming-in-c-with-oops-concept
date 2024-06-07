#include<iostream>
using namespace std;
 int main()
 	{
 		int i,n,fact;
 		cout<<"Enter Number\n";
 		cin>>n;
 		fact=1;
 		for(i=1;n>=1;n=n-1)
 		{
 			fact=fact*n;
		 }
		 cout<<"factorial"<<fact;
		 return 0;
	 }
