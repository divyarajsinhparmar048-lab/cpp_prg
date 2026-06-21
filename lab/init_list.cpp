#include <iostream>
using namespace std;

class t
{
    const int x;
    int i;

public:
    t(int a) : x(a)
    {
        i = a * 3;
    }

    void print();
};

int main()
{
    t t1(2);
    t1.print();
    return 0;
}

void t ::print()
{
    cout << "const X =" << x << "i = " << i << endl;
}
