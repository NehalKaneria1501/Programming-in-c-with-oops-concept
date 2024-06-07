#include<iostream>
using namespace std;
int main()
{
	try
	{
		int age=15;
		if(age >=18)
		{
			cout<<"You can vote-you are old enough"<<endl;
		}
		else
		{
			throw(age);
		}
	}
	catch(int myNum)
	{
		cout<<"You can't vote-you must be at least 18 years old\n"<<endl;
		cout<<"Age is:"<<myNum;
	}
	return 0;
}
