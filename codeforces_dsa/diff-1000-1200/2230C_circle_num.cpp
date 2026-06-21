#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        std::vector<int> v(m);
        for (int j = 0; j < m; j++)
        {
            cin >> v[j];
        }

        sort(v.begin(), v.end());

        int ones = 0;
        long long slot = 0;
        long long total = 0;
        for (int i : v)
        {
            total += i;
        }

        long long answer = -1;

        for (int k : v)
        {
            if (k == 1)
            {
                ones++;
            }
        }

        long long rems = total - ones;

        for (int h = ones; h < m; h++)
        {
            slot += (v[h] / 2) - 1;
        }

        if (ones == m - 1)
        {
            slot++;
        }

        slot = max(0LL, slot);

        answer = rems + min((long long)ones, (long long)slot);

        if (total == ones || total < 3)
        {
            answer = 0;
        }

        cout << answer << endl;
    }

    return 0;
}