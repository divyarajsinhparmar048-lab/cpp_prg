/*proof that
    return num++ != retrurn num;+num++;
    it executes num++ for return and then returns old value of num;
*/
#include <iostream>
using namespace std;
int fun(int *p)
{
    return (*p)++;
}

int main()
{
    int n = 10;
    int a = fun(&n);
    cout << "return=" << a << endl
         << "pointer_inc=" << n;
    return 0;
}