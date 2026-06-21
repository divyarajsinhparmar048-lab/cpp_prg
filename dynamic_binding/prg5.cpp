// q8.cpp
#include <iostream>
using namespace std;
class B
{
protected:
    int i;

public:
    B(int i = 0)
    {
        this->i = i;
    }

    void print()
    {
        cout << i;
    }
};
class D : public B
{
public:
    void print()
    {
        std::cout << i;
    }
    void print(B &b)
    {
        // error: ‘int B::i’ is protected within this context
        // Methods of class D can access
        // protected members of class B,
        // only if B object is part of object of D
        b.print();
    }
};

int main()
{
    D d;
    B b(5);
    d.print();
    d.print(d);
    return 0;
}