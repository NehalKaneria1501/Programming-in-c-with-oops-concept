#include<iostream>
using namespace std;
class a
{
	public:
		int a;
		void get_a_data()
		{
			cout<<"Enter the value of a:";
			cin>>a;
		}
};
class b:public a
{
	public:
		int b;
		void get_b_data()
		{
			cout<<"Enter the value of b:";
			cin>>b;
		}
};
class c:public b
{
private:
	int c;
	public:
	void get_c_data()	
{
	cout<<"Enter the value of c:";
	cin>>c;
}
void sum()
{
	int ans=a+b+c;
	cout<<"sum:"<<ans;
}
};
int main()
{
	c obj;
	obj.get_a_data();
	obj.get_b_data();
	obj.get_c_data();
	obj.sum();
	return 0;
}
