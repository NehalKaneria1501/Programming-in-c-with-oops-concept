#include<iostream>
using namespace std;
class encap
{
	private:
		int age;
		void show()
		{
			cout<<"Pari";
		}
		public:
			string name;
			void setdata(int a)
			{
				show();
				age=a;
				cout<<age<<endl;
			}
};
int main()
{
	encap obj;
	obj.name="Nehal";
	obj.setdata(23);
	cout<<obj.name;
	return 0;
}
