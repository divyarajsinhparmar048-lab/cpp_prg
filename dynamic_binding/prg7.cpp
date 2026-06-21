#include <iostream>
using namespace std;

class B
{
public:
    void f()
    {

        cout << "B::f()\n";
    }
    virtual void g()
    {
        cout << "B::g()\n";
    }
};
class D : public B
{
public:
    
    virtual void g()
    {
        cout << "D::g()\n";
    }
};

int main()
{
    B b;
    D d;

    B *b_p1 = &b;
    B *b_p2 = &d;
    B &b_r1 = b;
    B &b_r2 = d;
    b.f();     // Bf
    d.f();     // Df
    b_p1->f(); // Bf
    b_p2->f(); // BF
    b_r1.f();  // BF
    b_r2.f();  // Bf
    b.g();     // Bg
    d.g();     // Dg
    b_p1->g(); // Bg
    b_p2->g(); // Dg
    b_r1.g();  // Bg
    b_r2.g();  // Dg
    return 0;
}