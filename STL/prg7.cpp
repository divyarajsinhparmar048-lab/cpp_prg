#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> int_vect;
    for (int i = 0; i < 10; i++)
    {
        int_vect.push_back(i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << int_vect[i];
    }

    cout << endl;
    for (vector<int>::iterator it = int_vect.begin(); it != int_vect.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = int_vect.rbegin(); it != int_vect.rend(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}