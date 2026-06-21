#include <iostream>
#include <unordered_map>
using namespace std;
using city = unordered_map<int, string>;
int main()
{
    city c;
    c.insert(pair<int, string>(12, "goa"));
    c.insert(pair<int, string>(23, "anand"));
    c.insert(pair<int, string>(23, "ahmedabad"));
    c.insert(pair<int, string>(2, "gurugram"));
    c.insert(pair<int, string>(52, "delhi"));

    cout << "city at no 23: " << c[23] << endl;

    for (auto i = c.cbegin(); i != c.cend(); i++)
    {
        cout << (*i).first << " " << i->second << endl;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    // for (auto i = c.crbegin(); i != c.crend(); i++)
    // {
    //     cout << (*i).first << " " << i->second << endl;
    // }

    return 0;
}