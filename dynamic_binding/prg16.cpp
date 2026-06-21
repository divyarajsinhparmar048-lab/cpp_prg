#include <iostream>
using namespace std;
class B
{
public:
    B()
    {
        cout << "B::B()" << endl;
    }
    virtual ~B()
    {
        cout << "B::~B()" << endl;
    }
    virtual void print()
    {
        cout << "Base" << endl;
    }
};
class D : public B
{
public:
    D()
    {
        cout << "D::D()" << endl;
    }
    ~D()
    {
        cout << "D::~D()" << endl;
    }
    void print()
    {
        cout << "D" << endl;
    }
};

class D1 : public D
{
public:
    D1()
    {
        cout << "D1::D1()" << endl;
    }
    ~D1()
    {
        cout << "D1::~D1()" << endl;
    }
    void print()
    {
        cout << "D1" << endl;
    }
};
int main()
{
    B *b_p = new D1();
    b_p->print();
    delete b_p;
    return 0;
}