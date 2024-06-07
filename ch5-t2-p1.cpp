#include<iostream>
using namespace std;
class numbers
{
	private:
		int number;
			public:
				numbers(int num):number(num)
				{
				}
				bool operator<(const numbers & other)
				const
				{
					return number<other.number;
				}
				int getNumber()
				const
				{
					return number;
				}
};
int main()
{
numbers num1(16);
numbers num2(23);
if(num1<num2)
{
	std::cout<<"num2 is greater"<<num2.getNumber()<<std::endl;
}
else
{
	std::cout<<"num1 is greater"<<num1.getNumber()<<std::endl;
}
return 0;
}
