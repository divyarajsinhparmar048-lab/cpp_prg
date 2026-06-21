#include <bits/stdc++.h>
using namespace std;

class a
{
public:
    virtual void f()
    {
        cout << "in A" << endl;
    }

};

class b:public a
{
public:
    void f()
    {
        cout << "in B"<<endl;
    }
};

class c:public b
{
public:
    void f()
    {
        cout << "in C"<<endl;
    }
};


int main()
{
    
    b *bptr = new c;
    bptr->f();
    return 0;
}
