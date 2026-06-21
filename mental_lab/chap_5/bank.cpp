#include <iostream>
using namespace std;

class rectangle
{
    int bal = 1000;

public:
    void set_bal(int up_bal)
    {
        bal = up_bal;
    }
    void disp_bal()
    {
        cout << "bal= " << bal << endl;
    }
};

int main()
{
    rectangle r1;

    r1.set_bal(300);
    r1.disp_bal();
    // return 0;
}