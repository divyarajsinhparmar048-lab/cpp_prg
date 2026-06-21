#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 sum(T1 o1, T2 o2)
{
    return o1 + o2;
}

class complex
{
    double re, im;

public:
    complex(double re, double im)
    {
        this->im = im;
        this->re = re;
    }

    complex operator+(complex &c)
    {
        return complex(re + c.re, im + c.im);
    }

    friend ostream &operator<<(ostream &output, complex c)
    {
        output << "(" << c.re << "," << c.im << ")";
        return output;
    }
};

int main()
{
    cout << sum("hello", 2) << endl;
    cout << sum(string("hello"), 2) << endl;
    complex c1(1.1, 2.2), c2(3.3, 5.5);
    cout << sum(c1, c2);
}