#include <iostream>
using namespace std;

class B
{

public:
    virtual void f()
    {
        cout << "B::f()" << endl;
    }
};

class D : public B
{

public:
    void f()
    {
        cout << "D::f()" << endl;
    }
};

int main()
{
    B b;
    D d;

    B *b_p1 = &b;
    B *b_p2 = &d;

    // D *p = &b;

    b.f(); // Bf
    d.f(); // Df

    b_p1->f(); // Bf
    b_p2->f(); // Df

    B &b_r1 = b;
    B &b_r2 = d;

    b_r1.f(); // Bf
    b_r2.f(); // Df

    return 0;
}