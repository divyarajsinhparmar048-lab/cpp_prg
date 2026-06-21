#include <iostream>
struct Base
{
    virtual void abc()
    {
        std::cout << "Base::abc()\n";
    }
    void xyz()
    {
        abc();
    }
};
struct Derived : Base   
{
    virtual void abc()
    {
        std::cout << "Derived::abc()\n";
    }
};

int main()
{
    Derived d;
    Base *b_p = &d;
    b_p->abc();
    d.xyz();
    b_p->xyz();
    return 0;
}