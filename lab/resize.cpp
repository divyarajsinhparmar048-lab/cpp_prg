// we can initialize the array through constructors

#include <iostream>
using namespace std;
class rectangle;
class point
{
    int x, y;

public:
    point()
    {
        cin >> x;
        cin >> y;
    }
    friend class rectangle;
};
class rectangle
{
    point p[4];

public:
    void move(char m, int u)
    {
        for (int i = 0; i < 4; i++)
        {
            if (m == 'L')
                p[i].x -= u;
            else if (m == 'R')
                p[i].x += u;
            else if (m == 'U')
                p[i].y += u;
            else if (m == 'D')
                p[i].y -= u;
        }
    }

    void alter(char a, char m, int u)
    {
        if (a == 'I')
        {
            if (m == 'L')
            {
                p[0].x -= u;
                p[2].x -= u;
            }
            else if (m == 'R')
            {
                p[1].x += u;
                p[3].x += u;
            }
            else if (m == 'T')
            {
                p[0].y += u;
                p[1].y += u;
            }
            else if (m == 'B')
            {
                p[2].y -= u;
                p[3].y -= u;
            }
        }

        else if (a == 'D')
        {
            if (m == 'L')
            {
                p[0].x += u;
                p[2].x += u;
            }
            else if (m == 'R')
            {
                p[1].x -= u;
                p[3].x -= u;
            }
            else if (m == 'T')
            {
                p[0].y -= u;
                p[1].y -= u;
            }
            else if (m == 'B')
            {
                p[2].y += u;
                p[3].y += u;
            }
        }
    }

    void print()
    {
        cout << p[0].x << " " << p[0].y << endl;
        cout << p[1].x << " " << p[1].y << endl;
        cout << p[2].x << " " << p[2].y << endl;
        cout << p[3].x << " " << p[3].y << endl;
    }
};

int main()
{
    rectangle r;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char h;
        cin >> h;

        if (h == 'A')
        {
            char igdg, mv;
            cin >> igdg >> mv;

            int u;
            cin >> u;
            r.alter(igdg, mv, u);
        }
        else
        {
            int u;
            cin >> u;
            r.move(h, u);
        }
    }
    r.print();
}