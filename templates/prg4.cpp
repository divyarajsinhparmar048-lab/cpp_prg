#include <iostream>
using namespace std;
template <typename T1, typename T2>
T1 product(T2 num1, T2 num2, T1 num3)
{
    cout << "template function called\n";
    return num1 * num2 * num3;
}

int main()
{
    cout << product(3, 4, 3.5) << endl;
}