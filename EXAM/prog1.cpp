#include <iostream>
using namespace std;

class ComplexNumber
{
    float real,imaginary;

public:

    ComplexNumber(float a,float b)
    {
        real = a;
        imaginary = b;
    }

    ComplexNumber operator+(ComplexNumber n)
    {
        return ComplexNumber(this->real+n.real , this->imaginary+n.imaginary);
    }

    ComplexNumber operator *(float n)
    {
        return ComplexNumber((this->real)*n,(this->imaginary)*n);
    }

    void print()
    {
        cout << this->real<<"i"<<"+"<<this->imaginary<<"j"<<endl; 
    }
};

int main()
{
    ComplexNumber c1(1.1,2.2);
    ComplexNumber c2(3.3,4.4);

    ComplexNumber s = c1+c2;
    ComplexNumber p = c1*5.5;

    s.print();
    p.print();
    
    return 0;

}