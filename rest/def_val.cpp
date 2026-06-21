#include <iostream>
using namespace std;
int sum(int n1, int n2, int n3 = 3, int n4 = 4 void fun() { cout
                                                                << "fun" << endl cout
                                                                << sum(1, 2, 3, 4) << endl cout
                                                                << sum(1, 2, 3) << endl cout
                                                                << sum(1, 2) << endl } int main() {
int sum(int n1, int n2, int n3 = 111, int n4 = 222);
cout
<< "main" << endl
cout
<< sum(1, 2, 3, 4) << endl
cout
<< sum(1, 2, 3) << endl
cout
<< sum(1, 2) << endl
fun();
return 0; } int sum(int n1, int n2, int n3 = 3, int n4 = 4)) // Error You can not assign default values in definition and declaration
{
    { // if definition and declaration are in the same socpe
        return n1 + n2 + n3 + n4;
    }