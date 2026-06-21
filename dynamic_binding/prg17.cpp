#define PI 3.14 // it is a pre-processor directive so dont need the ;
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};

class Square : public Shape
{
    double length;

public:
    Square(double length)
    {
        this->length = length;
    }

    double area()
    {
        return length * length;
    }
};

class Rectangle : public Shape
{
    double length, width;

public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    double area()
    {
        return length * width;
    }
};

class Circle : public Shape
{
    double r;

public:
    Circle(double r)
    {
        this->r = r;
    }

    double area()
    {
        return PI * r * r;
    }
};

int main()
{
    // Shape *sp;
    // sp = new Square(5.5);
    // cout << sp->area() << endl;         //30.25
    // sp = new Rectangle(5.5, 6.6);
    // cout << sp->area() << endl;            //36.3
    // sp = new Circle(5.5);
    // cout << sp->area() << endl;             //94.98

    Shape *sp[3] = {
        new Square(5.5),
        new Rectangle(5.5, 6.6),
        new Circle(5.5)};
    for (int i = 0; i < 3; i++)
    {
        cout << sp[i]->area() << endl;
    }

    return 0;
}