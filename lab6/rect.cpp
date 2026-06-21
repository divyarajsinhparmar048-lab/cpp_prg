#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
    double x, y, length, width;

public:
    Rectangle(double x, double y, double length, double width)
    {
        this->x = x;
        this->y = y;
        this->length = length;
        this->width = width;
    }

    void operator<<(int n)
    {
        x -= n;
        return;
    }

    void operator>>(int n)
    {
        x += n;
        return;
    }

    void operator+(int n)
    {
        length += n;
        return;
    }

    void operator-(int n)
    {
        length -= n;
        return;
    }

    void print()
    {
        cout << x << "\t" << y << "\t" << length << "\t" << width << endl;
        return;
    }
};

int main()
{

    double x, y, l, w;
    cin >> x >> y >> l >> w;
    Rectangle rect(x, y, l, w);

    double i, n, units;
    char operation;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> operation;
        cin >> units;

        switch (operation)
        {
        case 'L':
            rect << units;
            break;
        case 'R':
            rect >> units;
            break;
        case 'I':
            rect + units;
            break;
        case 'D':
            rect - units;
            break;
        }
    }

    rect.print();
    return 0;
}