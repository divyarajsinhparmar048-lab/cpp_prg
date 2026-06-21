#include <iostream>
using namespace std;

class A
{
    int n;

public:

    A(int n)
    {
        cout << "inside const." << endl;
        this -> n = n;
    }

    A(const A& s)
    {
        cout << "inside copy const." << endl;
        n = s.n;
    }
};

int main()
{
    A a(5);
    A b(3);
    b = a;
    return 0;
}