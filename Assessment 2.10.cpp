#include<iostream>
using namespace std;
float calculate_gst(float amount,float gst_rate)
 {
    float gst_amount=amount*(gst_rate/100);
    float total_amount=amount+gst_amount;
    return total_amount;
}
int main() 
{
    float amount,gst_rate;
    cout<<"Enter the total amount:";
    cin>>amount;
    cout<<"Enter the GST rate in percentage:";
    cin>>gst_rate;
    if(cin.fail()) 
	{
        cout<<"Please enter valid numeric values."<<endl;
        return 1;
    }
    float total_amount=calculate_gst(amount,gst_rate);
    cout<<"Total amount including GST:"<<total_amount<<endl;
    return 0;
}
