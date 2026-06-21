#include <iostream>
using namespace std;

class A
{
protected:
    int num1 = 1;

public:
    A()
    {
        cout << "A constructor called\n";
    }
    ~A()
    {
        cout << "A destructor called\n";
    }
};
class B
{
protected:
    int num2 = 2;

public:
    B()
    {
        cout << "B constructor called\n";
    }
    ~B()
    {
        cout << "B destructor called\n";
    }
};

class C : public A,
          public B
{
protected:
    int num3 = 3;

public:
    C()
    {
        cout << "C constructor called\n";
    }
    ~C()
    {
        cout << "C destructor called\n";
    }
    void print()
    {
        cout << num1 << num2 << num3 << endl;
    }
};
int main()
{
    C c;
    c.print();
    return 0;
}