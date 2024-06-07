#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
void swapDares(string& dare1,string& dare2)
 {
    string temp=dare1;
    dare1=dare2;
    dare2=temp;
}
int main() 
{
    srand(time(0));
    string player1Dare,player2Dare;
    cout<<"Player 1,enter your dare:";
    getline(cin,player1Dare);
    cout<<"Player 2,enter your dare:";
    getline(cin,player2Dare);
    swapDares(player1Dare, player2Dare);
    cout<<"Swapped dares:\n";
    cout<<"Player 1's dare:"<<player1Dare<<endl;
    cout<<"Player 2's dare:"<<player2Dare<<endl;
    return 0;
}
