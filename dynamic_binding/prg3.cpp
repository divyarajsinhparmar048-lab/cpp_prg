#include <iostream>
using namespace std;

class A
{
public:
    int n1;
    float f1;

    A(int n1 = 0, float f1 = 1.1)
    {
        this->n1 = n1;
        this->f1 = f1;
    }

    void print()
    {
        cout << "A:" << "\t" << n1 << "\t" << f1 << endl;
        return;
    }

    void set_values(int n, float f)
    {
        n1 = n;
        f1 = f;
        return;
    }
};

class B : public A
{
public:
    int n2;
    float f2;

    B(int n = 0, float f = 1.1)
    {
        n2 = n;
        f2 = f;
    }

    void print()
    {
        cout << "B:" << "\t" << n1 << "\t" << f1 << "\t" << n2 << "\t" << f2 << endl;
        return;
    }

    void set_values(int n, float f)
    {
        n2 = n;
        f2 = f;
        return;
    }
};

int main()
{
    A a(1, 2.2), *a_p;
    B b(3, 4.4), *b_p;

    cout << "Size of one A object : " << sizeof(a) << endl;
    cout << "Size of one B objects: " << sizeof(b) << endl;

    a_p->print();
    b_p->print();

    a = b;

        cout << "After a = b;\n";
    a_p->print();
    b_p->print();

    b.A::set_values(6, 7.7);
    cout << "After b.A::set_values(6, 7.7);\n";
    a_p->print();
    b_p->print();

    a_p = b_p;
    // b_p = a_p;
    // b_p = (B *)a_p;
    cout << "After a_p = b_p;\n";
    a_p->print();
    b_p->print();
    cout << a_p->n1 << " " << a_p->f1 << endl;

    // cout << a_p->n2 << " " << a_p->f2 << endl;
    return 0;
}