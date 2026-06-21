#include <iostream>
using namespace std;

class A
{

    float flt;
    int num;

public:
    A(int n = 0, float f = 1)
    {
        num = n;
        flt = f;
    }
    void print()
    {
        cout << "A:" << num << " " << flt << endl;
    }
    void set_values(int n, float f)
    {
        num = n;
        flt = f;
    }
};
class B
{
    int num;
    float flt;

public:
    B(int n = 0, float f = 1.1)
    {
        num = n;
        flt = f;
    }
    void print()
    {
        cout << "B:" << num << " " << flt << endl;
    }
    void set_values(int n, float f)
    {
        num = n;
        flt = f;
    }
};

int main()
{
    A a(1, 2.2), *a_p = &a;
    B b(3, 4.4), *b_p = &b;
    cout << "Size of one A object : " << sizeof(a) << endl;
    cout << "Size of one B objects: " << sizeof(b) << endl;
    // a = b; // error
    // b = a; // error
    // a_p = b_p; // error
    // b_p = a_p; // error
    cout << a_p << endl
         << b_p << endl;
    a_p->print();
    b_p->print();
    // Works, but must be avoided
    // Coz may result in unexpected result
    a_p = (A *)b_p;
    cout << "After casting\n";
    cout << a_p << endl
         << b_p << endl;
    a_p->print();
    b_p->print();
    return 0;
}