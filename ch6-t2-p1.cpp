#include <iostream>
using namespace std;
class Shape 
{
public:
    Shape() 
	{
	}  
    virtual double calculate()const=0;
    virtual ~Shape() 
	{
	}
};
class Circle:public Shape 
{
private:
    double radius;
public:
    Circle(double r):radius(r) 
	{
	}
    double calculate()const override 
	{
        return 3.14159*radius*radius; 
    }
};
class Triangle:public Shape 
{
protected:
    double base;
    double height;
public:
    Triangle(double b,double h):base(b),height(h) 
	{
	}
    double calculate()const override 
	{
        return 0.5*base*height; 
    }
};
class Rectangle:public Shape 
{
private:
    double length;
    double width;
public:
    Rectangle(double l,double w):length(),width(w) 
	{
	}
    double calculate()const override 
	{
        return length*width; 
    }
};
int main() 
{
    Circle circle(5);
    Triangle triangle(4,6);
    Rectangle rectangle(3,7);
    cout<<"Area of circle:"<<circle.calculate()<<endl;
    cout<<"Area of triangle:"<<triangle.calculate()<<endl;
    cout<<"Area of rectangle:"<<rectangle.calculate()<<endl;
    return 0;
}
