#include <iostream>
using namespace std;

class base
{
public:
    int n_base;

    base(int n)
    {
        n_base = n;
    }

    virtual void disp()
    {
        cout << "1 n_base" << "\t" << n_base << endl;
        return;
    }
};

class derived : public base
{
public:
    int n_der;

    derived(int n) : base(5)
    {
        n_der = n;
    }

    void disp()
    {
        cout << "2 n_base" << "\t" << n_base << " 2 n_der" << "\t" << n_der << endl;
        return;
    }
};

int main()
{
    base b(5), *p_b;
    derived d(10), *p_d;
    p_b = &d; // base class pointer pointing to derived class

    p_b->n_base = 50;
    p_b->disp();

    // p_b->n_der = 100;
    p_b->base::disp();

    // p_d = &b;
    return 0;
}
