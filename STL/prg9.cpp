#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> mylist;
    mylist.push_back(89);
    mylist.push_back(98);
    mylist.push_front(90);

    cout << "LIST CONTENTS:" << endl;

    for (int i : mylist)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int &i : mylist)
    {
        i += 10;
    }

    for (int i : mylist)
    {
        cout << i << " ";
    }

    return 0;
}