#include<iostream>
using namespace std;
class Admin 
{
protected:
    string company_name;
    int manager_salary;
    int employee_salary;
    int total_staff;
    int total_annual_revenue;
    bool can_terminate;
public:
    Admin(string company_name,int manager_salary,int employee_salary,int total_staff,int total_annual_revenue, bool can_terminate):company_name(company_name),manager_salary(manager_salary),employee_salary(employee_salary),total_staff(total_staff),total_annual_revenue(total_annual_revenue),can_terminate(can_terminate) 
		{
		}
    virtual void myAccess() 
	{
        cout<<"Company Name:"<<company_name<<endl;
        cout<<"Manager Salary:"<<manager_salary<<endl;
        cout<<"Employee Salary:"<<employee_salary<<endl;
        cout<<"Total Staff:"<<total_staff<<endl;
        cout<<"Total Annual Revenue:"<<total_annual_revenue<<endl;
        cout<<"Can Terminate"<<(can_terminate?"Yes":"No")<<endl;
    }
};
class Manager:public Admin 
{
public:
    Manager(string company_name,int manager_salary,int employee_salary,int total_staff,int total_annual_revenue,bool can_terminate):Admin(company_name,manager_salary,employee_salary, total_staff,total_annual_revenue,can_terminate) 
		{
		}
    void myAccess()override 
	{
        Admin::myAccess();
    }
};
class Employee:public Manager 
{
public:
    Employee(string company_name,int manager_salary,int employee_salary,int total_staff,int total_annual_revenue,bool can_terminate):Manager(company_name,manager_salary,employee_salary,total_staff,total_annual_revenue,can_terminate) 
		{
		}
    void myAccess()override 
	{
        Admin::myAccess();
    }
};
int main() 
{
    Admin admin("google",50000,30000,100,1000000,true);
    Manager manager("facebook",60000,35000,80,1200000,false);
    Employee employee("amazon",40000,25000,50,800000,true);
    cout<<"Admin Access:"<<endl;
    admin.myAccess();
    cout<<endl<<"Manager Access:"<<endl;
    manager.myAccess();
    cout<<endl<<"Employee Access:"<< endl;
    employee.myAccess();
    return 0;
}
