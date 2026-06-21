#include <iostream>
using namespace std;

class complex
{
    float re;
    float im;

public:
    //  this is an example of the constructor overloading

    /*complex()
    {
        re = 0;
        im = 0;
        cout << "constructor overload!c3 set to 0 0!" << endl;
    }*/

    complex(float x = 0, float y = 0)
    {
        re = x;
        im = y;
        cout << "constructor called!" << endl;
    }

    void add(complex c);
    void disp();
};

void complex::add(complex c)
{
    re += c.re;
    im += c.im;
}

void complex::disp()
{
    cout << re << "+" << im << "i" << endl;
}

int main()
{
    complex c1(1.1, 1.1);
    complex *c2 = new complex(2.2, 2.2);
    complex c3;

    cout << "c3's ";
    c3.disp();
    cout << endl;

    c3.add(c1);
    c3.disp();

    c3.add(*c2);
    c3.disp();

    return 0;
}