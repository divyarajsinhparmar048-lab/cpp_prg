#include <iostream>
using std::cout;

class A
{
public:
    char c1[4] = {'A', 'B', '\0', '\0'};
    int i1 = 100;
    void print()
    {
        cout << "A: " << i1;
    }
};

class B
{
public:
    int i = 1000, j = 2000;
    void print()
    {
        cout << "B: " << i << " " << j;
    }
};

int main()
{
    A a;
    B *bptr;
    bptr = (B *)&a;
    bptr->print();
}