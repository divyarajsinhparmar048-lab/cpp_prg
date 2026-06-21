#include <iostream>
using namespace std;
// int sum(int n1, int n2, int n3, int n4 = 99);
//  Prototype#1

int sum(int n1, int n2, int n3 = 98, int n4);
// Prototype#2
int main()
{
    int sum(int n1, int n2, int n3 = 100, int n4 = 200); // Prototype#3
    void fun();                                          // Prototype#4
    cout << sum(1, 2, 3) << endl
         << sum(1, 2) << endl;
    fun();
    return 0;
}
int sum(int n1, int n2, int n3, int n4) { return n1 + n2 + n3 + n4; }
void fun()
{
    cout << sum(1, 2, 3, 4) << endl
         << sum(1, 2) << endl;
}