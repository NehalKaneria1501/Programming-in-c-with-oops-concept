#include<iostream>
#include<string>
using namespace std;
class Account 
{
private:
    string accountNumber;
    string accountName;
    string accountType;
    string accountBranch;
    double accountBalance;
public:
    Account(string number,string name,string type,string branch,double balance)
	 {
        accountNumber=number;
        accountName=name;
        accountType=type;
        accountBranch=branch;
        accountBalance=balance;
    }
    void display() 
	{
        cout<<"Account Number:"<<accountNumber<<endl;
        cout<<"Account Name:"<<accountName<<endl;
        cout<<"Account Type:"<<accountType<<endl;
        cout<<"Account Branch:"<<accountBranch<<endl;
        cout<<"Account Balance:"<<accountBalance<<endl;
    }
    string getAccountNumber() 
	{
        return accountNumber;
    }
};
int main()
 {
    int i;
    const int MAX_ACCOUNTS=100;
    Account accounts[MAX_ACCOUNTS]=
	 {
        Account("221199","Meera","Savings","Humber Branch",113355),
        Account("215242","Ishika","Current","CN Tower Branch",224466)
    };
    string searchNumber;
    cout<<"Enter account number to search:";
    cin>>searchNumber;
    bool found=false;
    for(i=0;i<MAX_ACCOUNTS;++i) 
	{
        if(accounts[i].getAccountNumber()==searchNumber)
		 {
            accounts[i].display();
            found=true;
            break;
        }
    }
    if (!found)
	 {
        cout<<"Account with account number"<<searchNumber<<"not found."<<endl;
    }
    return 0;
}
