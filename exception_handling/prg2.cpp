#include <iostream>
#include <cstring> // for strerror
#include <cerrno>  // for errno
using namespace std;

void divi(int n1, int n2) throw(int)
{
    try
    {
        if (n2 == 0)
        {
            throw n2; // system message
        }
        cout << n1 / n2 << "\n";
    }
    catch (int n)
    {
        cout << "Exception divide by :" << n << "\n"; // prints OS error message
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    divi(n1, n2);

    return 0;
}