#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int rem4 = 0;
        for (char c : s)
        {
            if (c == '4')
            {
                rem4++;
            }
        }

        int rem123;
        int pre2 = 0, suf13 = 0;

        for (char c : s)
        {
            if (c == '1' || c == '3')
            {
                suf13++;
            }
        }
        int max_sh = pre2 + suf13;

        for (char c : s)
        {
            if (c == '2')
            {
                pre2++;
            }

            if (c == '1' || c == '3')
            {
                suf13--;
            }

            max_sh = max(max_sh, pre2 + suf13);
        }

        cout << (int)s.size() - max_sh << endl;
    }

    return 0;
}