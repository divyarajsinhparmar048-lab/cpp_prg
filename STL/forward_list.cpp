#include <iostream>
#include <forward_list>
using namespace std;

void printFL(forward_list<int> &fl)
{
    for (int i : fl)
    {
        cout << i << " ";
    }
    cout << endl;
    return;
}

int main()
{
    forward_list<int> fl1;
    forward_list<int> fl2(3, 5);
    forward_list<int> fl3{1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "----------------------------------------------------------------------------" << endl;
    printFL(fl1);
    printFL(fl2);
    printFL(fl3);

    cout << "----------------------------------------------------------------------------" << endl;

    cout << fl2.front() << endl;
    // cout << fl2.back() << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    fl2.push_front(145);
    printFL(fl2);

    // cout << "----------------------------------------------------------------------------" << endl;
    // fl2.pop_front();
    // printFL(fl2);

    cout << "----------------------------------------------------------------------------" << endl;
    auto it = fl2.begin();
    advance(it, 2);
    fl2.insert_after(it, 87);

    printFL(fl2);

    int d = distance(fl2.begin(), fl2.end());

    cout << d << endl;

    cout << fl1.empty();
    return 0;
}