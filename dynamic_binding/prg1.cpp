#include <iostream>
using namespace std;

int fall()
{
    return 0;
}

class A
{
    int n;
    float flt;

public:
    A(int n = 0, float flt = 1.1)
    {
        this->n = n;
        this->flt = flt;
    }

    void print()
    {
        cout << n << "\t" << flt << endl;
        return;
    }

    void set_val(int i, float f)
    {
        n = i;
        flt = f;
    }
};

int main()
{
    A a[10];
    A *p = a;
    a[0].print();
    (*p).print();
    p->print();

    a[2].set_val(2.3, 4);
    (p + 2)->print();
    (p + 2)->set_val(2, 5.6);
    (p + 2)->print();

    return 0;
}