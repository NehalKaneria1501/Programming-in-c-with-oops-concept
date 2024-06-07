#include <iostream>
using namespace std;
char calculateGrade(int math,int phy,int chem)
 {
    if(math>80&&phy>75&&chem>72)
	 {
        return 'A';
    }
	else if(math>=60&&phy>=55&&chem>=50)
	  {
        return 'B';
    } 
	else if(math>=40&&phy>=35&&chem>=35)
	 {
        return 'C';
    }
	 else
	  {
        return 'D';
    }
}
int main() 
{
    int i,
	numStudents;
    cout<<"Enter the number of students:";
    cin>>numStudents;
    int math,phy,chem;
    char grade;
    for(i=1;i<=numStudents;++i) 
	{
        cout<<"Enter marks for Student"<<i<<"(Maths,Physics,Chemistry):";
        cin>>math>>phy>>chem;
        grade=calculateGrade(math,phy,chem);
        cout<<"Grade for Student"<<i<<":"<<grade<<endl;
    }
    return 0;
}
