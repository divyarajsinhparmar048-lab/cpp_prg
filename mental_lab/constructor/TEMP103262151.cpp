#include <iostream>
using namespace std;

class B
{
public:
    int data_;
    B(int d = 0) : data_(d)
    {
        cout << "B::B(int): " << data_ << endl;
    }
    ~B()
    {
        cout << "B::~B(): " << data_ << endl;
    }
};
class D : public B
{
    int info_;

public:
    D(int d, int i)
    {
        B(b1);
        info_ = i;
        cout << "D::D(int, int): " << data_ << ", " << info_ << endl;
    }
    D(int i) : info_(i) // ctor-2: Default construction of Base
    {
        cout << "D::D(int): " << data_ << ", " << info_ << endl;
    }
    ~D() { cout << "D::~D(): " << data_ << ", " << info_ << endl; }
};

int main()
{
    B b(5);

    D d1(1, 2);
    /*
    Now the code will work fine.
    There are two objects:
    1) Inherited one
    2) b1 (which is local to
    constructor D and will be
    destroyed outside the
    constructor
    */

    return 0;
}