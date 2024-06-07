#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class BankAccount 
{
private:
    string accountNumber;
    string accountHolder;
    double balance;
public:
    BankAccount(string accNum, string accHolder, double initialBalance) 
	{
        accountNumber = accNum;
        accountHolder = accHolder;
        balance = initialBalance;
    }
    void deposit(double amount) 
	{
        balance += amount;
    }
    void withdraw(double amount) 
	{
        if (balance >= amount) 
		{
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main() 
{
    BankAccount myAccount("123456", "John Doe", 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.display();
    return 0;
}
