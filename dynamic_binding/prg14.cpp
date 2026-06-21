#include <iostream>
using namespace std;

class B
{
public:
    int *p1 = new int;
    B(int i)
    {
        *(this->p1) = i;
        cout << "B::B()" << endl;
    }
    ~B()
    {
        delete p1;
        cout << "B::~B()" << endl;
    }
    virtual void print()
    {
        cout << *p1 << endl;
    }
};

class D : public B
{
public:
    int *p2 = new int;
    D(int i, int j) : B(i)
    {
        *(this->p2) = j;
        cout << "D::D()" << endl;
    }
    ~D()
    {
        delete p2;
        cout << "D::~D()" << endl;
    }
    void print()
    {
        cout << *p1 << " " << *p2 << endl;
    }
};
int main()
{
    
    B *b_p = new D(1, 2);
    b_p->print();
    delete b_p;
    return 0;
}