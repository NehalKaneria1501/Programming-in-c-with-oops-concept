#include<iostream>
using namespace std;
class a
{
	public:
		void func()
		{
			cout<<"i am in class a"<<endl;
		}
};
class b
{
	public:
		void func()
		{
			cout<<"i am in class b"<<endl;
		}
};
class c:public a,public b
{
};
int main()
{
	c obj;
	obj.a::func();
	obj.b::func();
	return 0;
}
