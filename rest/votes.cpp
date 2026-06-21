#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int votes;
    cin >> votes;

    int ref[n + 1] = {0};

    for (int i = 0; i < n + 1; i++)
    {
        ref[i] = i;
    }

    int vote[n + 1] = {0};
    for (int k = 0; k < votes; k++)
    {
        int m;
        cin >> m;
        vote[m]++;
    }

    int max = vote[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (vote[j] > vote[j + 1])
            {
                int temp = vote[j];
                vote[j] = vote[j + 1];
                vote[j + 1] = temp;
            }
        }
    }

    cout << vote[n + 1];

    return 0;
}