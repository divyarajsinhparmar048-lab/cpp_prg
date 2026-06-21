#include <iostream>
using namespace std;

class bank
{
    int bal;
    bool stat = false;

public:
    void create_ac(int x)
    {
        bal = x;
        stat = true;
    }

    void deposit_ac(int x, long long &total_bal)
    {
        if (stat)
        {
            bal += x;
            total_bal += x;
        }
    }

    void withdraw_ac(int x, long long &total_bal)
    {
        if (stat)
        {
            if (x <= bal)
            {
                bal -= x;
                total_bal -= x;
            }
        }
    }

    void close_ac(long int &active_ac)
    {
        bal = 0;
        stat = false;
        active_ac--;
    }

    int get_bal()
    {
        if (stat)
        {
            return bal;
        }
        return 0;
    }

    int isclose()
    {
        if (stat)
            return 1;
        return 0;
    }
};

int main()
{
    int n;
    cin >> n;
    bank *b = new bank[n];

    long long totalbalance = 0;
    long active_ac = 0;
    long created_ac = 0;
    string s;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> s;
        if (s == "CREATE")
        {

            cin >> a;
            b[created_ac].create_ac(a);
            created_ac++;
            active_ac++;
        }

        else if (s == "DEPOSIT")
        {
            int k;
            cin >> k >> a;
            if (k > 0 && k <= created_ac)
                b[k - 1].deposit_ac(a, totalbalance);
        }

        else if (s == "WITHDRAW")
        {
            int k;
            cin >> k >> a;
            if (k > 0 && k <= created_ac)
                b[k - 1].withdraw_ac(a, totalbalance);
        }

        else if (s == "CLOSE")
        {
            int k;
            cin >> k;
            if (k > 0 && k <= created_ac)
                b[k - 1].close_ac(active_ac);
        }

        else if (s == "TOTAL_BALANCE")
        {

            cout << totalbalance << endl;
        }

        else if (s == "TOTAL_ACCOUNTS")
        {
            cout << active_ac << endl;
        }
    }
}