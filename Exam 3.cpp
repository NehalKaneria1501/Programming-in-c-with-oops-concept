#include <iostream>
using namespace std;
class DivisionByZeroException:public exception 
{
public:
    const char*what()const throw()
	 {
        return "Division by zero not allowed!";
    }
};
int main()
 {
    try 
	{
        int numerator=10;
        int denominator=0;
        int res;
        if (denominator==0) 
		{
            throw DivisionByZeroException();
        }
        res=numerator/denominator;
        cout<<"Result after division:"<<res<<endl;
    }
    catch(const DivisionByZeroException&e)
	{
        cout<<"Exception:"<<e.what()<<endl;
    }
    return 0;
}
