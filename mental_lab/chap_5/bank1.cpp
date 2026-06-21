#include <iostream>
#include <string>
using namespace std;

class bank
{

    int ac_no[10];
    char type[10];
    int bal;

public:
    string name;
    void init()
    {

        getline(cin, name);

        cin >> type;
        for (int i = 0; i < 10; i++)
        {
            cin >> ac_no[i];
        }

        cin >> bal;
    }

    void deposite(int n)
    {
        bal += n;
    }

    int withdraw(int t)
    {
        if (t <= bal)
            bal -= t;
        else
        {
            cout << endl
                 << "WITHDRAW FAILED!!!" << endl;
            return -1;
        }

        return 0;
    }

    void disp()
    {
        cout << name << endl;
        cout << bal << endl;
    }
};

int main()
{
    bank b[3];
    for (int j = 0; j < 3; j++)
    {
        b[j].init();
    }

b:

    cout << "NAME" << endl;
    string t;
    cin >> t;

    int temp = -1;
    for (int i = 0; i < 3; i++)
    {
        if (b[i].name == t)
        {
            temp = i;
        }
    }

    if (temp == -1)
    {
        cout << "no user found with NAME!!";
        return -1;
    }

a:
    cout << "withdraw(W)" << "\t" << "deposite(D)" << "\t" << "display(DS)" << endl;
    string c;
    cin >> c;

    if (c == "DS")
        b[temp].disp();

    else
    {

        int n;
        cin >> n;
        if (c == "W")
            b[temp].withdraw(n);

        if (c == "D")
            b[temp].deposite(n);
    }

    cout << "want to use for another method-(same user)?(y/n)" << endl;
    cin >> c;
    if (c == "y")
    {
        goto a;
    }

    else
    {
        cout << "want to use for another a/c holder (y/n)?" << endl;
        cin >> c;

        if (c == "y")
            goto b;

        else if (c == "n")
        {
            return 0;
        }
    }

    return -1;
}