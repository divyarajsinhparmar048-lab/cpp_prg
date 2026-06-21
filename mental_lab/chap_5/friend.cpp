#include <iostream>
using namespace std;

class X;
class Y
{
    friend class X;
    int private_y = 20;
    void private_method()
    {
        cout << "Private Method of Y" << endl;
        cout << private_y << endl;
    }
};
class X
{

    int private_x = 10;
    void private_method()
    {
        cout << "Private Method of X" << endl;
        cout << private_x << endl;
        cout << private_y;
    }

public:
    void public_method(Y &y1)
    {
        private_method();
        y1.private_method();
        cout << y1.private_y << endl;
    }
};

int main()
{
    X x1;
    Y y1;
    x1.public_method(y1);
}