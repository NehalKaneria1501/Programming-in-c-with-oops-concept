#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() 
{
    vector<int>years={1994,1947,2002,1996,2002,1994,1996,2005,2010,1994};
    unordered_map<int,int>yearCount;
    for(year:years) 
	{
        yearCount[year]++;
    }
    vector<int>duplicateYears;
    for(auto it=yearCount.begin();it!=yearCount.end();++it)
	 {
        if(it->second >1)
		 {
            duplicateYears.push_back(it->first);
        }
    }
    if(duplicateYears.empty())
	 {
        cout<<"No duplicate years found"<<endl;
    } 
	else
	 {
        cout<<"Duplicate years found:";
        for(year:duplicateYears) 
		{
            cout<<year<<"";
        }
        cout << endl;
    }
    return 0;
}
