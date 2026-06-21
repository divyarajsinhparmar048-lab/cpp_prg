#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(3, 5);

    for (int x : v1)
    {
        cout << x << " ";
    }

    cout << endl;

    vector<int> v3{1, 2, 3};
    for (int i : v3)
    {
        cout << i << " ";
    }

    cout << endl;
    v3.push_back(457);
    v3.insert(v3.cbegin(), 570);
    for (int i : v3)
    {
        cout << i << " ";
    }

    auto it = v3.cbegin();
    cout << *it;

    // for (int i = 0; i < 25; i++)
    // {
    //     v3.push_back(i);
    //     cout << endl;
    //     cout << v3.size() << endl;
    //     cout << v3.capacity() << endl;
    // }

    // cout << endl;
    // cout << v3.size() << endl;
    // cout << v3.capacity() << endl;
    v1.clear();
    v2.clear();
    v3.clear();
    return 0;
}