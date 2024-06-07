#include<iostream>
using namespace std;
int main() 
{
	int i,j;
    int weights[3][3]={{50,60,55},{65,70,58},{45,62,59}};
    int maxWeight=weights[0][0]; 
    int minWeight=weights[0][0]; 
    int maxRefugeeRow,maxRefugeeCol,minRefugeeRow,minRefugeeCol;
    for(i=0;i<3;++i) 
	{
        for(j=0;j<3;++j) 
		{
            if(weights[i][j]>maxWeight)
			 {
                maxWeight=weights[i][j];
                maxRefugeeRow=i;
                maxRefugeeCol=j;
            }
            if(weights[i][j]<minWeight)
			 {
                minWeight=weights[i][j];
                minRefugeeRow=i;
                minRefugeeCol=j;
            }
        }
    }
    cout<<"The refugee with the highest weight is at position:("<<maxRefugeeRow<<","<<maxRefugeeCol<<")with weight"<<maxWeight<<endl;
    cout<<"The refugee with the lowest weight is at position:("<<minRefugeeRow<<","<<minRefugeeCol<<")with weight"<<minWeight<<endl;
    return 0;
}
