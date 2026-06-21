#include <iostream>

class Complex
{
    double re;
    double im;

public:
    void add(Complex c)
    {
        std::cout << &c << std::endl;
        re += c.re;
        im += c.im;
    }

    void print()
    {
        std::cout << "real: " << re;
        std::cout << "  img: " << im << std::endl;
    }

    void initialize(double _re, double _im)
    {
        re = _re;
        im = _im;
    }
} c3;

int i_global;

int main()
{
    Complex c1, *c2_ptr = new Complex;

    int i_auto, *ip_dynamic = new int;

    std::cout << "i_global addr\t\t" << &i_global << std::endl;
    std::cout << "c3 addr (global)\t" << &c3 << std::endl;
    std::cout << "i_auto addr\t\t" << &i_auto << std::endl;
    std::cout << "c1 addr (auto)\t\t" << &c1 << std::endl;
    std::cout << "i_dynamic addr\t\t" << ip_dynamic << std::endl;
    std::cout << "c2 addr (dynamic)\t" << c2_ptr << std::endl;

    c1.initialize(1, 1);
    c2_ptr->initialize(2, 2);

    c3.print();
    c3.add(c1);
    c3.print();
    c3.add(*c2_ptr);
    c3.print();

    return 0;
}
