#include<iostream>
main()
	{
		int a[5];
		int i,num;
		std::cout<<"Enter the even elements";
		std::cin>>num;
		for(i=0;i<=num;i++)
		{
			if(num%2==0)
			{
				std::cout<<"Element is even";
				break;		
			}
			else if(i==4)
			{
				std::cout<<"Element are not even";
			}
		}
		return 0;
	}
