#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int step(int, int);

int main()
{
    int n;
    cin >> n;
    int s = step(n, 0);
    cout << s;
    return 0;
}

int step(int n, int s)
{
    if (n == 1)
        return s;

    if (n % 2 == 0)
        return step(n / 2, s + 1);

    else if (n % 2 != 0)
    {
        if (n == 3)
            return step(n - 1, s + 1);
        else
        {
            if ((n + 1) % 4 == 0)
            {
                return step(n + 1, s + 1);
            }

            else
                return step(n - 1, s + 1);
        }
    }

    // for logical correctness what if none of if work
    return s;
}
