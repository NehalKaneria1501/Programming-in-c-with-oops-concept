#include<iostream>
using namespace std;
 int main()
	{
		char str[5];
		int null,i;
		cout<<"Enter a string:";
		gets(str);
		for(i=0;str[i]!=null;i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
			{
				str[i]=str[i]+32;
			}
			else if(str[i]>='a'&&str[i]<='z')
			{
				str[i]=str[i]-32;
			}
			cout<<"String after toggle each character";
			cout<<str;
			cout<<"\n";
		}
		return 0;
	}
