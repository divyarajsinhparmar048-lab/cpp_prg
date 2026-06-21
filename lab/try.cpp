#include <iostream>
using std::cout;
using std::endl;
class Test
{
    int i;
    const int t;

public:
    Test() : i(3), t(i * 2)
    {
    }
    void print()
    {
        cout << i << " " << t << endl;
    }
};
int main()
{
    Test t0;
    t0.print();
    return 0;
}