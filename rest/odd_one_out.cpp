#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int bitcount[32] = {0};
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        for (int b = 0; b < 32; b++)
        {
            if (x & (1 << b))
            {
                bitcount[b]++;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < 32; i++)
    {
        if (bitcount[i] % 2 == 1)
            result |= (1 << i);
    }

    cout << result;
    return 0;
}
