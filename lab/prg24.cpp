#include <iostream>
using namespace std;

class y
{
    int *b = new int(10);

public:
    y()
    {
        cout << "y's constructor is called" << endl;
    }

    ~y()
    {
        cout << "y's distructor is called" << endl;
        delete b;
    }
};

class x
{
    y y1;
    int *a = new int(11);

public:
    x()
    {
        cout << "x's constructor is called" << endl;
    }

    ~x()
    {
        cout << "x's distructor is called" << endl;
        delete a;
    }
};

int main()
{
    x x1;
    return 0;
}