#include <iostream>
using namespace std;
class a
{
    int x;

public:
    void add()
    {
        x += 1;
    }

    void print()
    {
        cout << x << endl;
    }

    a(float x)
    {
        this->x = x;
        cout << "constructor called!" << endl;
    }
};

int main()
{
    a a1(1);
    a1.print();
    return 0;
}