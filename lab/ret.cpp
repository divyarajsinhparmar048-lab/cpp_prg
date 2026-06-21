#include <iostream>
using namespace std;

class t
{
    int x;
    int y;

public:
    t(int a, int b)
    {
        x = a;
        return;
        y = b;
    }

    void print()
    {
        cout << x << "\t" << y << endl;
    }
};

int main()
{
    t t1(2, 3);
    t1.print();
}