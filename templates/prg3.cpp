#include <iostream>
using namespace std;
template <typename T>
T product(T num1, T num2)
{
    cout << "Template function called\n";
    return num1 * num2;
}
float product(float num1, float num2)
{
    cout << "Non-template function called\n";
    return num1 * num2;
}
int product(int num1, int num2, int num3)
{
    cout << "Non-template function with three argumets called\n";
    return num1 * num2 * num3;
}
int main()
{
    cout << product(2, 3) << endl;
    cout << product(1.1f, 2.2f) << endl;
    cout << product<float>(1.1f, 2.2f) << endl;
    cout << product<>(1.1f, 2.2f) << endl;
    cout << product(1.1, 2.2) << endl;
    // Not an exact match
    cout << product(1.1, 2.2, 3.3) << endl;
    return 0;
}