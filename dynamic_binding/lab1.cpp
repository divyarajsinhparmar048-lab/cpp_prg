#include <iostream>
#define PI 3.14
using namespace std;

class Shape // ABC
{
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Square : public Shape
{
    double length;

public:
    Square(double l)
    {
        length = l;
    }

    double area() override
    {
        return length * length;
    }

    double perimeter() override
    {
        return 4 * length;
    }
};

class Rectangle : public Shape
{
    double length, width;

public:
    Rectangle(double a, double b)
    {
        length = a;
        width = b;
    }

    double area() override
    {
        return length * width;
    }

    double perimeter() override
    {
        return 2 * (length + width);
    }
};

class Circle : public Shape
{
    double rad;

public:
    Circle(double r)
    {
        rad = r;
    }

    double area() override
    {
        return PI * rad * rad;
    }

    double perimeter() override
    {
        return 2 * PI * rad;
    }
};

int main()
{
    int n;
    char c;

    cin >> n;
    Shape *arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'C')
        {
            double r;
            cin >> r;
            Circle c(r);
            arr[i] = &c;
        }

        else if (c == 'R')
        {
            double l, w;
            cin >> l >> w;
            Rectangle r(l, w);
            arr[i] = &r;
        }

        else if (c == 'S')
        {
            double l;
            cin >> l;
            Square s(l);
            arr[i] = &s;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]->area() << "\t" << arr[i]->perimeter() << endl;
    }
}