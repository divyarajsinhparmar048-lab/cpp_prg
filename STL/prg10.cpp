#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l{2, 3};
    l.push_back(4);
    l.push_back(5);
    l.push_front(1);

    auto it = l.begin();
    advance(it, 2);

    l.insert(it, 4);

    for (int i : l)
    {
        cout << i << " ";
    }

    // not supported int *p = &l[2];

    cout << endl;

    cout << l.front() << endl;
    cout << l.back() << endl;

    cout << *(prev(next(l.begin(), 2), 2)) << endl;

    // prog to edit the list items

    l.front() = 7;
    l.back() = 9;
    it = l.begin();
    advance(it, 2);
    *it = 15;

    for (auto i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    l.pop_front();
    l.pop_back();
    it = l.begin();
    advance(it, 3);
    l.erase(it);

    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << l.size() << endl;

    return 0;
}