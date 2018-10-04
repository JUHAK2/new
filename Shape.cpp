

#include <iostream>
using namespace std;

class Shape
{
private:
    double x, y;
public:
    virtual void area() = 0;
    
    
    double getWidth()
    {
        return x;
    }
    double getHeight()
    {
        return y;
    }
    Shape(double x, double y)
    {
        this -> x = x;
        this -> y = y;
    }
    
};

class Triangle :public Shape
{
private:
    double triArea;
    
public:
    double getArea()
    {
        return triArea;
    }
    Triangle(double x, double y) : Shape(x,y){}
    virtual void area()
    {
        triArea = Shape::getWidth() * Shape::getHeight() / 2;
    }
    
    
};

class Rectangle :public Shape
{
private:
    double recArea;
    
public:
    double getArea()
    {
        return recArea;
    }
    Rectangle(double x, double y) : Shape(x,y){}
    virtual void area()
    {
        recArea = Shape::getWidth() * Shape::getHeight();
    }
    
    
};
int main()
{
    Triangle tr1(10, 20);
    tr1.area();
    
    Rectangle rec1(10, 20);
    rec1.area();
    
    cout << "Area of triagle is " << tr1.getArea() << endl;
    cout << "Area of rectangle is " << rec1.getArea() << endl;
    
    
}



/*
 1)
 
 Write a program that defines a Shape class with a constructor that gives value to x(width) and y(height). Create two child classes triangle and rectangle, that calculate the area of the shape (Name of the function should be area) In the main, define two variables a triangle and a rectangle and then call the area() function fo rwidth=10 and height =20 in this two variables.
 
 
 
 2) Write a program with a parental class ('Animal'). Inside it define a name and an age variables, and set_value() function.Then create two child classes( Zebra and Dolphin) which write a message telling the age, the name, and place of birth ('Africa' for Zebra and 'Ocean' for Dolphin).
*/
