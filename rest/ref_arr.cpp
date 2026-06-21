#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int &b = a[3];
    // declaration of a ref. to the whole arr.
    int (&b)[5] = a;
    cout << b;
    return 0;
}