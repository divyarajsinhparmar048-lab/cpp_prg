#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class SimpleArray
{
    int n;
    int *p;

public:
    SimpleArray(int n)
    {
        p = new int[n];
        this->n = n;
        for (int i = 0; i < n; i++)
        {
            cin >> *(p + i);
        }
    }

    ~SimpleArray()
    {
        delete[] p;
        cout << "destructor called\n";
    }

    SimpleArray operator+(SimpleArray s)
    {

        if ((*this).n == s.n)
        {
            for (int i = 0; i < n; i++)
            {
                *((*this).p + i) += *(s.p + i);
            }
            return;
        }

        else
            return;
    }

    void print()
    {
        for (int i = 0; i < n; i++)
        {
            cout << *((*this).p + i) << "\t";
        }
        return;
    }
};

int main()
{
    int n1, n2;
    cin >> n1;
    SimpleArray simple_array_1(n1);
    cin >> n2;
    SimpleArray simple_array_2(n2);

    simple_array_1 + simple_array_2;

    simple_array_1.print();

    return 0;
}