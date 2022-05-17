#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
    private:
        double x; 
        double y;
    public: 
        Shape(); 
        Shape(double, double); 
        virtual ~Shape(); 
        double getY(); 
        double getX(); 
        //deconstructor in base class is virtual
        void set(double,double); 
        //pure virtual functions to be defined by child classes 
        virtual double getArea()=0; 
        virtual void display()=0;  
};
#endif