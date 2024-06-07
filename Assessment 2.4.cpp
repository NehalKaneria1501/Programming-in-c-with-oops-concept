#include <iostream>
using namespace std;
int main() 
{
    int base=56;
    int height=21;
    double area=0.5*base*height;
    cout<<"Area of the triangle:"<<area<<"square units"<<endl;
    int sumOfDigits=0;
    int tempArea=static_cast<int>(area);
    while(tempArea!=0)
	 {
        sumOfDigits+=tempArea%10;
        tempArea/=10;
    }
    cout<<"Sum of all digits of the area:"<<sumOfDigits<<endl;
    return 0;
}
