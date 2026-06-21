#include <iostream>
using namespace std;
template <typename T>
T product(T n1, T n2)
{
    return n1 * n2;
}

int main()
{
    cout << product(2, 3) << endl;
    cout << product(2.2f, 3.6f) << endl;
    cout << product(2.5, 3.5) << endl;
    cout << product<int>(2.5, 3) << endl;
    string s1 = "hello", s2 = "world";
    // cout << product<int>(s1, s2) << endl;
    return 0;
}
