#include <iostream>
using std::cout;
using std::endl;
class Base
{
    Base()
    {
        cout << "Constructor: Base" << endl;
    }
    ~Base()
    {
        cout << "Destructor: Base" << endl;
    }
};
class Other
{
    Other()
    {
        cout << "Constructor: Other" << endl;
    }
    ~Other()
    {
        cout << "Destructor: Other" << endl;
    }
};

class Derived : public Base
{
    Other o;
    Derived()
    {
        cout << "Constructor: Derived" << endl;
    }
    ~Derived()
    {
        cout << "Destructor: Derived" << endl;
    }
};
int main()
{
    Derived derived;
    return 0;
}