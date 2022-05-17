#ifndef RECTANGLE_H 
#define RECTANGLE_H 
#include "Shape.h"
//child of the shape class via public inheritance 
class Rectangle : public Shape
{
    //adds new values of width and height 
    private: 
        double width; 
        double height; 
    public: 
        Rectangle();
        Rectangle(double,double,double,double);
        virtual ~Rectangle();
        double getWidth(); 
        double getHeight();
        virtual double getArea();  
        void setDim(double,double);
        virtual void display(); 
};
#endif