#include <iostream>
using namespace std;

class Bank
{
    long long bal;
    bool active;

public:
    Bank()
    {
        bal = 0;
        active = false;
    }

    void create(long long x)
    {
        bal = x;
        active = true;
    }

    void deposit(long long x, long long &totalBalance)
    {
        if (active)
        {
            bal += x;
            totalBalance += x;
        }
    }

    void withdraw(long long x, long long &totalBalance)
    {
        if (active && bal >= x)
        {
            bal -= x;
            totalBalance -= x;
        }
    }

    void close(long long &totalBalance, long long &activeCount)
    {
        if (active)
        {
            totalBalance -= bal;
            bal = 0;
            active = false;
            activeCount--;
        }
    }

    bool isActive()
    {
        return active;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    Bank* accounts = new Bank[Q];   // max possible accounts = Q

    long long totalBalance = 0;
    long long activeCount = 0;
    int createdCount = 0;

    while (Q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "CREATE")
        {
            long long x;
            cin >> x;

            accounts[createdCount].create(x);
            totalBalance += x;
            activeCount++;
            createdCount++;
        }

        else if (cmd == "DEPOSIT")
        {
            int i;
            long long x;
            cin >> i >> x;

            if (i > 0 && i <= createdCount)
                accounts[i - 1].deposit(x, totalBalance);
        }

        else if (cmd == "WITHDRAW")
        {
            int i;
            long long x;
            cin >> i >> x;

            if (i > 0 && i <= createdCount)
                accounts[i - 1].withdraw(x, totalBalance);
        }

        else if (cmd == "CLOSE")
        {
            int i;
            cin >> i;

            if (i > 0 && i <= createdCount)
                accounts[i - 1].close(totalBalance, activeCount);
        }

        else if (cmd == "TOTAL_ACCOUNTS")
        {
            cout << activeCount << "\n";
        }

        else if (cmd == "TOTAL_BALANCE")
        {
            cout << totalBalance << "\n";
        }
    }

    delete[] accounts;
    return 0;
}