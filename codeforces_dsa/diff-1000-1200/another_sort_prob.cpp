#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        int m;
        cin >> m;
        vector<int> arr(m);

        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }

        int k = 0;
        for (int i = 0; i < m - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                k = max(k, arr[i] - arr[i + 1]);
            }
        }

        int prev = arr[0];
        bool ok = true;
        for (int i = 1; i < m; i++)
        {
            if (arr[i] >= prev)
            {
                prev = arr[i];
            }
            else
            {

                if (arr[i] + k >= prev)
                {
                    prev = arr[i] + k;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
