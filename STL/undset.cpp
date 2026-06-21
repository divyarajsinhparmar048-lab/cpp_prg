#include <iostream>
#include <unordered_set>
#include <cstdlib>
using namespace std;

int main()
{

    unordered_set<int> st1;
    // srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        int n = rand() % 100;
        cout << "random number: " << n << endl;
        st1.insert(n);
    }

    cout << endl;
    for (auto i = st1.cbegin(); i != st1.cend(); i++)
    {
        cout << *(i) << " ";
    }
    cout << endl;

    // for (auto i = st1.crbegin(); i != st1.crend(); i++)
    // {
    //     cout << *(i) << " ";
    // }
    // cout << endl;
    cout << st1.count(86) << endl;
    return 0;
}