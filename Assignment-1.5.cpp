#include <iostream>
using namespace std;
class Patient 
{
private:
    int patientNumber; 
    string diagnosis; 
public:
    void billing() 
	{
        cout << "Billing process initiated." << endl;
    }
    void makeAppointment() 
	{
        cout << "Appointment scheduled successfully." << endl;
    }
};
int main() 
{
    Patient patient1;
    patient1.billing();
    patient1.makeAppointment();
    return 0;
}

