#include<iostream>
using namespace std;
int main() 
{
	int i;
    int puzzle[5][5]={{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};
    int sumDiagonal1=0;
    int sumDiagonal2=0;
    for(i=0;i<5;++i) 
	{
        sumDiagonal1+=puzzle[i][i];
        sumDiagonal2+=puzzle[i][4-i];
    }
    cout<<"Sum of the main diagonal:"<<sumDiagonal1<<endl;
    cout<<"Sum of the secondary diagonal:"<<sumDiagonal2<<endl;
    return 0;
}
