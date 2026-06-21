#include <iostream>
using namespace std;

class chair
{
public:
    int legs;
    int hands;
    void revolve(int x, int y)
    {
        cout << x + y;
    }
};

int main()
{
    chair ch1;
    ch1.legs = 4;
    ch1.hands = 2;

    cout << ch1.legs << " " << ch1.hands;
    ch1.revolve(5, 7);

    return 0;
}
