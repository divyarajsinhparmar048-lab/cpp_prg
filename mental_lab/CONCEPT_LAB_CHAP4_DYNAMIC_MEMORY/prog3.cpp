#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *p = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - j - 1; k++)
        {
            if (p[k] > p[k + 1])
            {
                int temp = p[k];
                p[k] = p[k + 1];
                p[k + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << '\t';
    }

    delete[] p;

    return 0;
}