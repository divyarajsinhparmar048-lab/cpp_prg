#include <iostream>
using namespace std;
class A
{
public:
    virtual void print() const
    {
        cout << "const print\n";
    }

    virtual void print()
    {
        cout << "non-const print\n";
    }
};

class B : public A
{
public:
    void print()
    {
        cout << "B print\n";
    }

    void print() const
    {
        cout << "B-const print\n";
    }
};

class C : public A
{
public:
    void print()
    {
        cout << "C print\n";
    }

    void print() const
    {
        cout << "C-const print\n";
    }
};

int main()
{
    A a;
    const A *ptr = &a;
    ptr->print();
    B b;
    ptr = &b;
    ptr->print();
    C c;
    ptr = &c;
    ptr->print();

    return 0;
}