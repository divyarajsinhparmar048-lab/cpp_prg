#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "B constructed\n"; }
    virtual ~Base() { cout << "B destructed\n"; }
};

class Derived : public Base
{
public:
    Derived() { cout << "D constructed\n"; }
    ~Derived() { cout << "D destructed\n"; }
};

int main()
{
    Base *base = new Base();
    delete base;
    cout << "---------------------------------------------------\n";
    Derived *derived = new Derived();
    delete derived;
    cout << "---------------------------------------------------\n";
    Base *poly = new Derived();
    delete poly;

    return 0;
}