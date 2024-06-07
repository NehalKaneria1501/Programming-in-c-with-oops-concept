#include<iostream> 
using namespace std; 
void ConvertSectoDay(int n) 
{ 
	int day=n/(24*3600); 
	n =n%(24*3600); 
	int hour=n/3600; 
	n%=3600; 
	int minutes=n/60; 
	n%=60; 
	int seconds=n; 
	cout<<day<<""<<"days"<<hour<<""<<"hours"<<minutes<<""<<"minutes"<<seconds<<""<<"seconds"<<endl; 
} 
int main() 
{ 
	int n=129600; 
	ConvertSectoDay(n); 
	return 0; 
} 
