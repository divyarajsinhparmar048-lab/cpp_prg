#include <iostream>
using namespace std;

class bank
{
    long long int bal;
    bool stat = false;

public:
    void create_ac(long long int x, long long &total_bal)
    {
        bal = x;
        stat = true;
        total_bal += x;
    }

    void deposit_ac(long long int x, long long &total_bal)
    {
        if (stat)
        {
            bal += x;
            total_bal += x;
        }
    }

    void withdraw_ac(long long int x, long long &total_bal)
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

    void close_ac(long long &active_ac, long long &tot_bal)
    {
        if (stat)
        {
            tot_bal -= bal; // subtract first
            bal = 0;
            stat = false;
            active_ac--;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    bank *b = new bank[n];

    long long totalbalance = 0;
    long long active_ac = 0;
    int created_ac = 0;
    string s;
    for (int i = 0; i < n; i++)
    {
        long long int a;
        cin >> s;
        if (s == "CREATE")
        {

            cin >> a;
            b[created_ac].create_ac(a, totalbalance);
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
                b[k - 1].close_ac(active_ac, totalbalance);
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

    delete[] b;
}