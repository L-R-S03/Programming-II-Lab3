#include "Circle.h"
#include <iostream>
using namespace std; 
//default constructor sets x y and radius to 0
Circle::Circle() 
{
    //uses set function from parent 
    set(0,0); 
    radius=0;    
}
//parameter constructor sets x and y and radius by passed values 
Circle::Circle(double x, double y, double r)
{
    set(x,y); 
    radius=r; 
}
Circle::~Circle()
{}
//getter and setter for radius 
double Circle::getRadius()
{
    return radius; 
}

void Circle::setRadius(double r)
{
    radius=r; 
}
//returns the area by squaring the radius multiplied by 3.14 for pi 
double Circle::getArea()
{
    return radius*radius*3.14; 
}
//prints out the coordinates, radius and display for the circle with correct formatting
void Circle::display()
{
    cout << "\n"; 
    cout << "Coord: (" << getX() << ", " << getY() <<") \n"; 
    cout << "radius = " << radius <<"\n"; 
    cout << "area = " << getArea() <<"\n"; 
}
