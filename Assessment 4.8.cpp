#include<iostream>
using namespace std;
int main() 
{
   int a[10][10],transpose[10][10],row,column,i,j;
   cout<<"Enter rows and columns of matrix:";
   cin>>row>>column;
   cout<<"Enter elements of matrix:\n"<<endl;
   for(i=0;i<row;++i)
    {
      for(j=0;j<column;++j)
	   {
         cout<<"Enter element a"<<i+1<<j+1<<":";
         cin>>a[i][j];
      }
   }
   cout<<"Entered Matrix:\n"<<endl;
   for(i=0;i<row;++i)
    {
      for(j=0;j<column;++j) 
	  {
         cout<<""<<a[i][j];
     }
         if(j==column-1)
         {
            cout<<endl<<endl;
      }
   }
   for(i=0;i<row;++i)
   {
      for(j=0;j<column;++j)
	   {
         transpose[j][i]=a[i][j];
      }
  }
   cout<<"Transpose of Matrix:\n"<<endl;
   for(i=0;i<column;++i)
   {
      for(j=0;j<row;++j) 
	  {
         cout<<""<<transpose[i][j];
     }
 }
	     if(j==row-1)
	     {
            cout<<endl<<endl;
      }
   return 0;
}
