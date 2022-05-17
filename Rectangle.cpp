#include "Rectangle.h"
#include <iostream>
using namespace std; 
//default constructor sets x and y to 0 from shappe set function and sets width and height to 0
Rectangle::Rectangle()
{
    set(0,0); 
    width=height=0; 
}

//parameter constructor takes 4 doubles 
Rectangle::Rectangle(double x, double y, double h, double w)
{
    //uses Shape set function to set x and y 
    set(x,y); 
    //sets width and height based off parameters 
    width=w; 
    height=h;  
}

Rectangle::~Rectangle()
{}
//getters
double Rectangle::getHeight()
{
    return height; 
} 

double Rectangle::getWidth()
{
    return width; 
}
//setters for width and height 
void Rectangle::setDim(double h,double w)
{
    height=h; 
    width=w; 
}

//returns the area by multiplying width and height 
double Rectangle::getArea()
{
    return width*height; 
}

//displays needed information to console with correct formatting 
void Rectangle::display()
{
    cout << "\n"; 
    //prints coord: (x,y) using getX() and getY() from Shape class
    cout << "Coord: (" << getX() << ", " << getY() <<") \n";
    //prints width and height values  
    cout << "w = " << width <<", h = " <<height <<"\n"; 
    //prints area followed by the returned value of the getArea function 
    cout << "area = " << getArea() <<"\n"; 
}