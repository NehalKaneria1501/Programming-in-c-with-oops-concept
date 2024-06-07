#include<iostream>
using namespace std;

class cust
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_telecom_brand_name;
    int cust_mobile_number;
    string cust_city;
    int cust_simcard_validity;

public:
    void setData(int cust_id, string cust_name, int cust_age, string cust_telecom_brand_name, int cust_mobile_number, string cust_city, int cust_simcard_validity)
    {
        this->cust_id = cust_id;
        this->cust_name = cust_name;
        this->cust_age = cust_age;
        this->cust_telecom_brand_name = cust_telecom_brand_name;
        this->cust_mobile_number = cust_mobile_number;
        this->cust_city = cust_city;
        this->cust_simcard_validity = cust_simcard_validity;
    }

    void getData()
    {
        cout << "cust_id: " << this->cust_id << endl;
        cout << "cust_name: " << this->cust_name << endl;
        cout << "cust_age: " << this->cust_age << endl;
        cout << "cust_telecom_brand_name: " << this->cust_telecom_brand_name << endl;
        cout << "cust_mobile_number: " << this->cust_mobile_number << endl;
        cout << "cust_city: " << this->cust_city << endl;
        cout << "cust_simcard_validity: " << this->cust_simcard_validity << endl;
    }
};

int main()
{
    cust c1, c2, c3, c4, c5;
    c1.setData(1, "Akshar", 21, "Fiddo", 4670126789, "Toranto,On", 2024);
    c2.setData(2, "Nehal", 23, "Bell", 123456789, "Mississauga,On", 2024); 
    c3.setData(3, "Rishi", 38, "BT", 441122233333, "London", 2023);
    c4.setData(4, "Anant", 30, "Jio", 919265754161, "New Mumbai", 2024);
    c5.setData(5, "Rani", 24, "Reliance", 919428273647, "New Delhi", 2022);
    c1.getData();
    c2.getData();
    c3.getData();
    c4.getData();
    c5.getData();
    return 0;
}

