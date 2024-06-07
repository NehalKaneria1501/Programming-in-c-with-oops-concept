#include <iostream>
using namespace std;
int main() 
{
    int tv_width=32;
    int tv_height=52;
    int margin=10;
    int total_width =tv_width+2*margin;
    int total_height=tv_height+2*margin;
    int max_wall_area=total_width*total_height;
    cout<<"To fit the TV with a"<<margin<<"-inch margin around it, ";
    cout<<"the maximum wall area required is"<<max_wall_area<<"square inches."<<endl;
    return 0;
}

