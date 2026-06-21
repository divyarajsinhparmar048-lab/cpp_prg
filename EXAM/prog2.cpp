#include <iostream>
using namespace std;

class  A
{
    int a;

protected:
    int m =50;
public:
    int y =10;
    A(int n)
    {
        a = n;
    }
};


class B: protected A
{
    int b;
public:
    B(int x):A(5)
    {
        
        b = a;
    }
};


int main()
{
    B b(10);
    return 0;
}