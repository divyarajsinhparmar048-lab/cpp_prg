#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d1;
    deque<int> d2{1, 3, 4, 67, 5, 6, 7};
    for (int i : d2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << d2.size() << "\n";

    d2.clear();

    for (int i : d2)
    {
        cout << i << " ";
    }

    cout << d2.size();
    return 0;
}