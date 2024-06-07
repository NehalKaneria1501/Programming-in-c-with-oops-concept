#include<iostream>
#include <string>
using namespace std;
class Employee 
{
private:
    int emp_id;
    string emp_name;
    string emp_role;
    int emp_age;
    float emp_salary;
    float emp_experience;
    string emp_city;
    string emp_company_name;

public:
    void getdata() 
	{
        cout<<"Enter Employee ID: ";
        cin>>emp_id;
        cout<<"Enter Employee Name: ";
        cin.ignore(); 
        getline(cin, emp_name);
        cout<<"Enter Employee Role: ";
        getline(cin, emp_role);
        cout<<"Enter Employee Age: ";
        cin>>emp_age;
        cout<<"Enter Employee Salary: ";
        cin>>emp_salary;
        cout<<"Enter Employee Experience: ";
        cin>>emp_experience;
        cout<<"Enter Employee City: ";
        cin.ignore();
        getline(cin,emp_city);
        cout<<"Enter Employee Company Name: ";
        getline(cin,emp_company_name);
    }
    void displaydata() 
	{
        cout<< "Employee ID: "<<emp_id<<endl;
        cout<< "Employee Name: "<< emp_name<<endl;
        cout<< "Employee Role: "<< emp_role<<endl;
        cout<< "Employee Age: "<<emp_age<<endl;
        cout<< "Employee Salary: "<< emp_salary<<endl;
        cout<< "Employee Experience: "<< emp_experience<<"years"<<endl;
        cout<< "Employee City: "<<emp_city<<endl;
        cout<<"Employee Company Name: "<<emp_company_name<<endl;
    }
};

int main() 
{
	int i,n;
    Employee employees[5];
    cout<<"Enter details for 5 employees:\n";
    for(i=0;i<5;++i) 
	{
        cout<<"Employee"<<i+1;
        employees[i].getdata();
    }
    cout<<"Details of 5 employees:\n";
    for(i=0;i<5;++i) 
	{
        cout<<"Employee"<<i+1<<":\n";
        employees[i].displaydata();
    }
    return 0;
}

