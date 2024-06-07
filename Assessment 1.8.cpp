#include <iostream>
using namespace std;
int main() 
{
    int totalInches,feet,inches;
    cout<<"Enter height in inches:";
    cin>>totalInches;
    feet=totalInches/12;
    inches=totalInches%12;
    cout<<"Height:"<<feet<<"feet"<<inches<<"inches"<<endl;
    return 0;
}
