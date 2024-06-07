#include<iostream>
using namespace std;
int main() 
{
    int i,killingScores[10];
    cout<<"Enter killing scores of 10 soldiers:"<<endl;
    for(i=0;i<10;++i) 
	{
        cout<<"Soldier"<<(i+1)<<":";
        cin>>killingScores[i];
    }
    int maxKillingScore=killingScores[0];
    int maxKillingSoldierIndex=0;
    for(i=1;i<10;++i)
	 {
        if(killingScores[i]>maxKillingScore)
		 {
            maxKillingScore=killingScores[i];
            maxKillingSoldierIndex=i;
        }
    }
    cout<<"Soldier"<<(maxKillingSoldierIndex+1)<<"has the highest killing score of"<<maxKillingScore<<endl;
    return 0;
}
