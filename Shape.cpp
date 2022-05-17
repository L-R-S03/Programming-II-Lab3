#include <iostream>
#include "Shape.h"

using namespace std; 
//default constructor sets x and y values to 0 
Shape::Shape()
{
    x=0; 
    y=0;
}
//parameter constructor takes 2 doubles to set to x and y values 
Shape::Shape(double x,double y)
{
    this->x=x; 
    this->y=y;  
}

//getters for x and y 
double Shape::getX()
{
    return x; 
}

double Shape::getY()
{
    return y; 
} 

//takes 2 doubles and updates x and y values 
void Shape::set(double x, double y)
{
    this->x=x; 
    this->y=y; 
}

Shape::~Shape()
{}