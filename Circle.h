#ifndef CIRCLE_H 
#define CIRCLE_H 
#include "Shape.h"
class Circle : public Shape 
{
    private:
        double radius;  
    public: 
        Circle(); 
        Circle(double,double,double); 
        virtual ~Circle(); 
        double getRadius();
        void setRadius(double r); 
        virtual double getArea();
        virtual void display();  
};
#endif 

