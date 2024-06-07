#include<iostream>
using namespace std;
int main()
 {
    int a,b,c,d;
    int Max;
    cout<<"Enter four numbers:";
    cin>>a>>b>>c>>d;
    if (a>b)
	 {
        if(a>c)
		 {
            if(a>d)
			 {
                Max=a;
            }
			 else 
			{
                Max=d;
            }
        }
		 else 
		{
            if(c>d) 
			{
                Max=c;
            }
			 else 
			{
                Max=d;
            }
        }
    } else 
	{
        if(b>c)
		 {
            if(b>d)
			 {
                Max=b;
            }
			 else 
			{
                Max=d;
            }
        }
		 else
		 {
            if(c>d)
			 {
                Max=c;
            } 
			else 
			{
                Max=d;
            }
        }
    }
    cout<<"Maximum number is:"<<Max<<endl;
    return 0;
}
