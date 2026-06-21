#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{1, 5, 7, 3, 2};
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    for (auto it = v.cbegin(); it != v.cend(); it++)
    {
        cout << *it << " ";
    }
}