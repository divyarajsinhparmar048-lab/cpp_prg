#include <iostream>
#include <map>
#include <string>
using namespace std;
template <typename T, typename U>
using phoneMap = map<T, U>;

int main()
{
    string name;
    int num;
    phoneMap<string, int> phone;

    cout << "Enter the 3 set of name and number:" << endl;

    for (auto i = 0; i < 3; i++)
    {
        cin >> name;
        cin >> num;
        // phone[name] = num;
        phone.insert(pair<string, int>(name, num));
    }
    cout << "----------------------------------------------------------------" << endl;
    phone["hema"] = 5667;

    phone.insert(pair("vigo", 7787));

    for (auto [name, number] : phone)
    {
        cout << name << " " << number << endl;
    }

    cout << "----------------------------------------------------------------" << endl;

    cout << "phone numbers list:" << endl;
    map<string, int>::iterator p;
    for (p = phone.begin(); p != phone.end(); p++)
    {
        cout << (*p).first << " " << (*p).second << endl;
    }

    // Finding the number of person

    cout << "Enter the name you want to find" << endl;
    cin >> name;
    num = phone["nana"];
    cout << "the number of person is :: " << num << endl;

    // name = phone[9054];

    return 0;
}
