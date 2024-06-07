#include<iostream>
#include<sstream>
using namespace std;
string secondsToTime(int seconds) 
{
    int hours=seconds/3600;
    int minutes=(seconds % 3600)/60;
    int secs=seconds%60;
    stringstream ss;ss<<hours<<":"<<(minutes<10?"0":"")<<minutes<<":"<<(secs<10?"0":"")<<secs;
    return ss.str();
}
int timeToSeconds(string time)
 {
    int hours,minutes,seconds;
    char colon;
    istringstream iss(time);
    if(!(iss>>hours>>colon>>minutes>>colon>>seconds)||colon!=':') 
	{
        return -1;
    }
    return hours*3600+minutes*60+seconds;
}
int main() 
{
    int choice;
    cout<<"Enter 1 to convert seconds to time, or 2 to convert time to seconds:";
    cin>>choice;
    if(choice==1) 
	{
        int seconds;
        cout<<"Enter seconds:";
        cin>>seconds;
        cout<<"Time:"<<secondsToTime(seconds)<<endl;
    }
	 else if(choice==2) 
	{
        string time;
        cout<<"Enter time in HH:MM:SS format:";
        cin>>time;
        int totalSeconds=timeToSeconds(time);
        if(totalSeconds!=-1) 
		{
            cout<<"Total seconds:"<<totalSeconds<<endl;
        }
		 else 
		{
            cout<<"Invalid time format!"<<endl;
        }
    }
	 else 
	{
        cout<<"Invalid choice! Please enter 1 or 2."<<endl;
    }
    return 0;
}
