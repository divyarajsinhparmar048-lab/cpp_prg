#include <iostream>
using namespace std;

class rectangle
{

public:
    int len;
    int br;

    void get_data(int n, int m)
    {
        len = n;
        br = m;
    }

    void get_data_k()
    {
        int a, b;
        cin >> a >> b;
        len = a;
        br = b;
    }

    void display()
    {
        cout << "length " << len << endl
             << "breadth " << br << endl;
    }

    void area_peri()
    {
        cout << "area " << (len * br) << endl
             << "periphery " << 2 * (len + br) << endl;
    }
};

int main()
{
    rectangle r1, r2, r3;

    r1.get_data(10, 20);
    r1.display();
    r1.area_peri();

    r2.get_data_k();
    r2.display();
    r2.area_peri();

    r3.get_data_k();
    r3.display();
    r3.area_peri();

    r1.len = 100;
    r1.display();
    return 0;
}