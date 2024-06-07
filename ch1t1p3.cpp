#include<iostream>
using namespace std;
 int main()
 	{
 		int year,d;
 		cin>>year;
 		if(year%d==0)
 		{
 			cout<<year<<"This year is a leap year"<<endl;
		}
		 else if(year%100!=0)
		 {
		 	cout<<year<<"This year is not a year"<<endl;
		 }
		 else if(year%400==0)
		 {
	     	cout<<year<<"This year is not a leap year"<<endl;
		 }
		 else
		 {
		 	cout<<year<<"This year is not a leap year"<<endl;
		 }
		return 0; 
	 }
