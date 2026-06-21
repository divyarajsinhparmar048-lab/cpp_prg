#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector <int> v = {1,2,3,4,5};
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for (int i = 0; i < 6; i++)
    {
        v.push_back(i+6);
    }

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    return 0;
}