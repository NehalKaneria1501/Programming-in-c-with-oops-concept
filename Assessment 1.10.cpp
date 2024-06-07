#include<iostream> 
using namespace std; 
#define DAYS_IN_WEEK 7 
void find(int number_of_days) 
{ 
	int year,week,days;
	year=number_of_days/365; 
	week=(number_of_days%365)/DAYS_IN_WEEK; 
	days=(number_of_days%365)%DAYS_IN_WEEK; 			
	cout<<"years=\n"<<year; 
	cout<<"weeks=\n"<<week; 
	cout<<"days=\n"<<days;	 
}  
int main() 
{ 
	int number_of_days=400; 
	find(number_of_days); 
	return 0; 
} 
