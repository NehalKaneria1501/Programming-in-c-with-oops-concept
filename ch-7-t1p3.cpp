#include <iostream>
using namespace std;
bool validatePassword(const string& password)
{
	int c;
        if(isupper(c)) 
		{
            return true; 
        }
         return false; 
    }
int main() 
{
    string password;
    cout<<"Enter your password:";
    cin>>password;
    try 
	{
        if(!validatePassword(password)) 
		{
            throw("Password must contain at least one uppercase letter.");
        }
        cout<<"Password is valid."<<endl;
    }
    catch (const invalid_argument) 
	{
        cerr<<"Invalid Password:"<<endl;
    }
    return 0;
}
