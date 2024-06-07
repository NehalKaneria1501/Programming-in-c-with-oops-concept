#include<iostream>
using namespace std;
class num
{
	private:
		int num;
		public:
			void getnum(void)
			{
				cout<<"Enter a value"<<endl;
				cin>>num;
			}
			int returnnum(void)
			{
				return num;
			}
};
class square:public num
{
	public:
		int getsquare(void)
		{
			int num,sqr;
			num=returnnum();
			sqr=num*num;
			return sqr;
		}
};
class cube:public num
{
	public:
		int getcube(void)
		{
			int num,cube;
			num=returnnum();
			cube=num*num*num;
			return cube;
		}
};
int main()
{
	square objs;
	cube objc;
	int sqr,cube;
	objs.getnum();
	cout<<"sqaure of"<<objs.returnnum()<<"is:"<<sqr<<endl;
	objc.getnum();
	cube=objc.getcube();
	cout<<"cube of"<<objs.returnnum()<<"is:"<<cube<<endl;	
	return 0;
}
