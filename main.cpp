//-------------------------------------------------------------------------------------------
//Lauren Smith
//Programming II Lab 2022 
//Lab3
//------------------------------------------------------------------------------------------
#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std; 

int main()
{
    //Makes an array of Shape pointers to hold objects of child class  
    Shape *p[3];
    //Makes two rectangles and a circle in the array 
    p[0]=new Rectangle(1,2,20,10);
    p[1]=new Circle(1,2,10); 
    p[2]=new Rectangle(3,4,20,10); 
    //runs the display function for each object 
    for(int i=0; i<3; i++)
    {
        p[i]->display(); 
    }
    //loops through and deletes each array object to avoid memory leak
    for(int i=0; i<3; i++)
    {
        delete p[i]; 
    }
    return 0;  
}