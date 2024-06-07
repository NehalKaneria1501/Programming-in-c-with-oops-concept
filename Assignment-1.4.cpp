#include <iostream>
using namespace std;
class room 
{
    int length;
    int breadth;
    int height;
public:
    void getRoom() 
	{
        cout<<"Enter length, breadth, and height:";
        cin>>length>>breadth>>height;
    }

    void putRoom() 
	{
        cout<<"Length:"<<length<<",Breadth:"<<breadth<<",Height:"<<height<<endl;
    }
};
class address 
{
    int houseNumber;
    char city[30];
    char state[30];
public:
    void getAddress() 
	{
        cout<<"House number:";
        cin>>houseNumber;
        cout<<"City:";
        cin>>city;
        cout<<"State:";
        cin>>state;
    }
    void putAddress() 
	{
        cout << "House No.: " << houseNumber << ", City: " << city << ", State: " << state << endl;
    }
};
class house 
{
    char houseName[30];
    address houseAddress;
    room rooms[10]; 
public:
    void input() 
	{
        cout << "Enter house name: ";
        cin >> houseName;
        cout << "Enter address:\n";
        houseAddress.getAddress();
        for (int i = 0; i < 3; ++i)
		 {
            cout << "Room Details " << i + 1 << ":\n";
            rooms[i].getRoom();
        }
    }
    void display() 
	{
        cout << "House name:"<< houseName<<endl;
        cout << "Address:";
        houseAddress.putAddress();
        for(int i = 0; i < 3; ++i)
		 {
            cout<<"Room Details " << i + 1 << ":\n";
            rooms[i].putRoom();
        }
    }
};
int main()
 {
    house myHouse;
    myHouse.input();
    myHouse.display();
    return 0;
}
