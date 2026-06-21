#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Product
{
    string name;
    double price;

public:
    Product(string name = "\0", int price = 0.00)
    {
        this->name = name;
        this->price = price;
    }

    Product(const Product &c)
    {
        this->price = c.price * 2;
        this->name = c.name;
    }

    void print()
    {
        cout << name << "\t" << price << endl;
    }
};

int main()
{
    string name;
    cin >> name;
    double price;
    cin >> price;

    Product p1(name, price);
    Product p2 = p1;

    return 0;
}
