#include <iostream>
using namespace std;

class B1
{
public:
    void print() { cout << "B1::print" << endl; } // NOT virtual
};
class D1 : public B1
{
public:
    void print() { cout << "D1::print" << endl; }
};
class D2 : public D1
{
public:
    virtual void print() { cout << "D2::print" << endl; } // virtual here
};
class D3 : public D2
{
public:
    void print() { cout << "D3::print" << endl; }
};
int main()
{
    B1 *p1 = new D3();
    D1 *p2 = new D3();
    D2 *p3 = new D3();
    D3 *p4 = new D3();
    p1->print(); // D3print
    p2->print(); // D3print
    p3->print(); // D3
    p4->print(); // D3
    return 0;
}