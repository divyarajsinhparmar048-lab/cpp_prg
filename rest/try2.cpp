#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    int &c = b;
    cout << &a << endl
         << &b << endl
         << &c << endl;
    cout << a << endl
         << b << endl
         << c;

    int &a[3] = {a, b, c};
}