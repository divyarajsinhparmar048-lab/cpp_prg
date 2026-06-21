#include <iostream>
using namespace std;
template <typename T>

void myswap(T &n1, T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    return;
}

int main()
{
    int int1 = 5, int2 = 7;
    cout << "Before swap: int1 = " << int1;
    cout << " and int2 = " << int2 << endl;
    myswap(int1, int2);
    cout << "After swap: int1 = " << int1;
    cout << " and int2 = " << int2 << endl;

    double double1 = 5, double2 = 7;
    cout << "Before swap: double1 = " << double1;
    cout << " and double2 = " << double2 << endl;
    myswap(double1, double2);
    cout << "After swap: double1 = " << double1;
    cout << " and double2 = " << double2 << endl;

    string s1 = "hello", s2 = "world";
    cout << "Before swap: string1= " << s1;
    cout << " and string 2= " << s2 << endl;
    myswap(s1, s2);
    cout << "After swap: string1= " << s1;
    cout << " and string 2= " << s2 << endl;

    return 0;
}