#include <iostream>
using namespace std;

class B
{
public:
    virtual void g()
    {
        cout << "B::g()\n";
    }
};
class D1 : public B
{
public:
    void g()
    {
        cout << "D1::g()\n";
    }
};
class D2 : public D1
{
    void g()
    {
        cout << "hello" << endl;
    }
};
class D3 : public D2
{
};

int main()
{
    // D1 d1;
    // D2 d2;
    D3 d3;
    D1 *p1 = &d3;
    // all are the examples of dynmaaic binding
    // B *b_p1 = &d1;
    // B *b_p2 = &d2;
    // B *b_p3 = &d3;
    p1->g(); //
    // b_p1->g(); // D1g
    // b_p2->g(); // D1g
    // b_p3->g(); // Bg

    // D1 *p4 = &d2;
    // p4->g(); // D1g
    return 0;
}