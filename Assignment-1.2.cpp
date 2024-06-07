#include<iostream>
using namespace std;
class time
{
        int hr,min,sec;
        public:
                void get()
                {
                    cout<<"Enter Hour ::\n";
                    cin>>hr;
                    cout<<"Enter Minutes ::\n";
                    cin>>min;
                    cout<<"Enter Seconds ::\n";
                    cin>>sec;
                }
                void disp()
                {
                        cout<<"["<<hr<<":"<<min<<":"<<sec<<"]\n";
                }
                void sum(time &,time &);
};
void time::sum(time &t1,time &t2)
{
        sec=t1.sec+t2.sec;
        min=sec/60;
        sec=sec%60;
        min=min+t1.min+t2.min;
        hr=min/60;
        min=min%60;
        hr=hr+t1.hr+t2.hr;
}
int main()
{
        time t1,t2,t3;
        cout<<"Enter 1st time Details::\n";
        t1.get();
        cout<<"Enter 2nd time Details::\n";
        t2.get();
        cout<<"The 1st time entered is::\n";
        t1.disp();
        cout<<"The 2nd time entered is::\n";
        t2.disp();
        t3.sum(t1,t2);
        cout<<"The Sum of two times are::\n";
        t3.disp();
        return 0;
}
