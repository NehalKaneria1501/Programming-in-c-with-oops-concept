#include<iostream>
using namespace std;
int main()
 {
 	int i,j;
    const int size=5;
    int students[size][size];
    int studentID=1;
    for(i=0;i<size;++i)
	 {
        for(j=0;j<size;++j)
		 {
            students[i][j]=studentID++;
        }
    }
    cout<<"Original arrangement of students:"<<endl;
    for(i=0;i<size;++i)
	 {
        for(j=0;j<size;++j)
		 {
            cout<<students[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Throwing hats for the upper half of the triangle matrix:\n"<<endl;
    for(i=0;i<size;++i) 
	{
        for(j=0;j<=i;++j)
		 {
            cout<<students[i][j]<<"";
        }
        cout<<endl;
    }
    cout<<"Throwing hats for the lower half of the triangle matrix:\n"<<endl;
    for(i=1;i<size;++i) 
	{
        for(j=i;j<size;++j)
		 {
            cout<<students[i][j]<<"";
        }
        cout<<endl;
    }
    return 0;
}
